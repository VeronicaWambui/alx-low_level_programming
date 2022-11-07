#include <stdio.h>
#include "main.h"

/**
  * main - program that prints its name
  * @argc: argument count
  * @argv: argunment vector
  * Return: int
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
