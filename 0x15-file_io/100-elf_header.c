#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <main.h>
#include <stdlib.h>

void error_exit(char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(98);
}

void print_elf_header(Elf64_Ehdr *header)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%2.2x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS])
    {
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("<unknown>\n"); break;
    }
    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA])
    {
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("<unknown>\n"); break;
    }
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        default: printf("<unknown: %d>\n", header->e_ident[EI_OSABI]); break;
    }
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header->e_type)
    {
        case ET_NONE: printf("NONE (Unknown type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("<unknown>\n"); break;
    }
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
    printf("  Start of program headers:          %lu (bytes into file)\n", (unsigned long)header->e_phoff);
    printf("  Start of section headers:          %lu (bytes into file)\n", (unsigned long)header->e_shoff);
    printf("  Flags:                             0x%x\n", header->e_flags);
    printf("  Size of this header:               %u (bytes)\n", header->e_ehsize);
    printf("  Size of program headers:           %u (bytes)\n", header->e_phentsize);
    printf("  Number of program headers:         %u\n", header->e_phnum);
    printf("  Size of section headers:           %u (bytes)\n", header->e_shentsize);
    printf("  Number of section headers:         %u\n", header->e_shnum);
    printf("  Section header string table index: %u\n", header->e_shstrndx);
}

int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
        error_exit("Usage: ./elf_header <filename>");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Cannot open file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
        error_exit("Error: Cannot read file");

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
        error_exit("Error: Not an ELF file");

    print_elf_header(&header);

    close(fd);
    return 0;
}
