#include <stdio.h>
int main(void)
{
  int u;
  char w;
  float x;
  long int y;
  long long int z;
  printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(w));
  printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(u));
  printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(y));
  printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
  printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(x));
  return (0);
}
