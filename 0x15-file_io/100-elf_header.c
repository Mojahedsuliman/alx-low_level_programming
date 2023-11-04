#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - check if a file is an ELF file.
 * @e_ident: a pointer to an array containing the ELF magic numbers
 *
 * Description: If the file is not an ELF file - exit code 98.
*/
void check_elf(unsigned char *e_ident)
{
		int i;

		for (i = 0; i < 4; i++)
		{
				if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F' &&
				{
				dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
				exit(98);
			}
		}
}

/**
 * print_magic - prints the magic numbers of an ELF header.
 * @e_ident: a pointer to an array containing the ELF magic numbers
 *
 * Description: Magic numbers are seprated by spaces.
*/
void print_magic(unsigned char *e_ident)
{
		int i;

		printf("  Magic: ");

		for (i = 0; i < EI_NIDENT; i++)
		{
				printf("%02x ", e_ident[i]);

				if (i == EI_NIEDENT - 1)
				printf("\n");
				else
				printf(" ");
		}
}

/**
 * print_class - prints the class of an ELF header.
 * @e_ident: a pointer to an array containing the ELF class
*/
void print_class(unsigned char *e_ident)
{
		printf("  Class: ");

		switch (e_ident[EI_CLASS])
		{
				case ELFCLASSNONE:
				printf("none\n");
				break;

				case ELFCLASS32:
				printf("ELF32\n");
				break;

				case ELFCLASS64:
				printf("ELF64\n");
				break;

				default:
				printf("<unkown: %x>\n", e_ident[EI_CLASS]);
}
}
