#include <stdio.h>
/**
 * main - start of the program
 *
 * Description: This prgram print the alphabets in bith lower & upper cases using putchar();
 *
 * Return: 0 means successful termination
 */

int main(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }

        for (ch = 'A'; ch <= 'Z'; ch++)
        {
                putchar(ch);
        }

        putchar('\n');

        return (0);
}
