#include "main.h"
#include <elf.h>

/**
 * print_magic - prints the magic numbers
 * @h: header
 */
void print_magic(Elf64_Ehdr h)
{
		int i;

		printf("  Magic:   ");
		for (i = 0; i < EI_NIDENT; i++)
		{
		printf(" %02x", h.e_ident[i]);
		}
		printf("\n");

		print_mod(h);
}

/**
 * print_mod - prints the type of the file
 * @h: header
*/
void print_mod(Elf64_Ehdr h)
{
		printf("  Class:
		");
		if (h.e_ident[EI_Class] == ELFCLASS64)
		{
			printf("ELF64\n");
		}
		else
		{
				printf("ELF32\n");
		}
}

/**
 *print_class - prints the class of the file
 *@h: header
 */
void print_class(Elf64_Ehdr h)
{
		printf("  Data:    ");
		if (h.e_ident[EI_Data] == ELFDATA2LSB)
		{
			printf("2's complement, little endian\n");
		}
		else
		{
				printf("2's complement, big endian\n");
		}
}

/**
 * print_version - prints the version of the file
 *@h: header
*/
void print_version(Elf64_Ehdr h)
{
			printf("  Version: %d\n", h.e_ident[EI_Version]);
}
