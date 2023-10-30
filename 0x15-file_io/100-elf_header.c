#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

int main(int argc, char **argv) {
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fd = open(argv[1], O_RDONLY)) == -1)
        handle_error("open");

    if (lseek(fd, 0, SEEK_SET) == -1)
        handle_error("lseek");

    if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
        handle_error("read");

    printf("Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           ehdr.e_ident[EI_MAG0], ehdr.e_ident[EI_MAG1], ehdr.e_ident[EI_MAG2], ehdr.e_ident[EI_MAG3],
           ehdr.e_ident[EI_MAG4], ehdr.e_ident[EI_MAG5], ehdr.e_ident[EI_MAG6], ehdr.e_ident[EI_MAG7],
           ehdr.e_ident[EI_MAG8], ehdr.e_ident[EI_MAG9], ehdr.e_ident[EI_MAG10], ehdr.e_ident[EI_MAG11],
           ehdr.e_ident[EI_MAG12], ehdr.e_ident[EI_MAG13], ehdr.e_ident[EI_MAG14], ehdr.e_ident[EI_MAG15]);

    printf("Class:                             ELF%d\n", (int)ehdr.e_ident[EI_CLASS]);
    printf("Data:                              ");
    switch (ehdr.e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid data encoding\n");
            break;
    }
    printf("Version:                           %d (current)\n", (int)ehdr.e_ident[EI_VERSION]);
    printf("OS/ABI:                            ");
    switch (ehdr.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: 0x%x>\n", (unsigned int)ehdr.e_ident[EI_OSABI]);
            break;
    }
    printf("ABI Version:                       %d\n", (int)ehdr.e_ident[EI_ABIVERSION]);
    printf("Type:                              ");
    switch (ehdr.e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: 0x%x>\n", (unsigned int)ehdr.e_type);
            break;
    }
    printf("Entry point address:               0x%lx\n", ehdr.e_entry);
    printf("\nFormat: the same as readelf -h (version 2.26.1)\n");

    close
