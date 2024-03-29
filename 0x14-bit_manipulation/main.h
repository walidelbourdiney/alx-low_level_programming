#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/**
 *  * Header file for 0x14. C Bit manipulation
 *   * ~dawoud
 *    * _putchar - fun
 *     * @c: char
 *      * Return: int
 *       */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int power(unsigned int x, unsigned int n);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
char *binary_to_str(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*Prototypes of Advanced tasks*/
int get_endianness(void);

#endif
