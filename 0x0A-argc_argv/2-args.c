#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: size of argv .
 * @argv: a pointer to the array containing the program line arguments .
 * Return: 0 .
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
