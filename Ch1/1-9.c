#include <stdio.h>

int main()
{
  int c, is_first_space;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t')
    {
      if (is_first_space)
      {
        putchar(' ');
        is_first_space = 0;
      }
    }
    else
    {
      putchar(c);
      is_first_space = 1;
    }
  }
}