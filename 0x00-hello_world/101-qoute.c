#include <unistd.h>
#include <stdio.h>
/**
 * main - start of the program
 * Description: print a qoute using write(); function
 * Return: 1 means success
 */
int main(void)
{
	char qoute[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, qoute, 59);
	return (1);
