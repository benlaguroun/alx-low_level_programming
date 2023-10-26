#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - Entry point of the program.
 *
 * Description: This program is designed to check the code for ALX-Africa
 * Cohort 15 Students. It serves as a template for writing C programs.
 *
 * Return: Always returns EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	return (EXIT_SUCCESS);
}
