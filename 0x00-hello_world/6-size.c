#include <stdio.h>
/**
 *main - Program for printing size of datatypes
 *Return: 0 (Success)
 */
int main(void)
{
char w;
int u;
long int y;
long long int z;
float x;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(x));
return (0);
}
