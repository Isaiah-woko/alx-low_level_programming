#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdint.h>

/**
 * union Endian - This union provides a way to check the
 * endianness of the system by interpreting
 * the same block of memory as both a
 * 32-bit integer and an array of characters.
 *
 * @c: array of characters representing the bytes of the integer
 * @i: integer view of the same memory space
 */

typedef union Endian
{
	uint32_t i;
	char c[4];

} EndianCheck;


int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
