#include <stdio.h>
int main(void)
{
  int u;
  char w;
  float x;
  long int y;
  long long int z;
  printf("Integer size: %lu byte(s)\n", (unsigned long)sizeof(u));
  printf("Char size: %lu byte(s)\n", (unsigned long)sizeof(w));
  printf("float size: %lu byte(s)\n", (unsigned long)sizeof(x));
  printf("long int size: %lu byte(s)\n", (unsigned long)sizeof(y));
  printf("long long int size: %lu byte(s)\n", (unsigned long)sizeof(z));
  return (0);
}
