#include <stdio.h>

int main()
{
  long nc = 0;

  while (getchar() != EOF)
    nc++;

  printf("Count: %ld\n", nc);
}