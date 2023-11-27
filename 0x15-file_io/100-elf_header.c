#include "main.h"

/**
 * display_elf_header - header function
 */
void display_elf_header(const char *filename);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    display_elf_header(argv[1]);

    return 0;
}

/**
 * display_elf_header - Displays information from the ELF header of a file.
 * @filename: The name of the ELF file.
 */
void display_elf_header(const char *filename) {
    int fd, i;
    Elf64_Ehdr header;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", filename);
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file %s\n", filename);
        close(fd);
        exit(98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
        dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", filename);
        close(fd);
        exit(98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header.e_ident[i]);
    printf("\n");
    
    printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", header.e_type);
    printf("  Entry point address:               %lx\n", (unsigned long)header.e_entry);

    close(fd);
}
