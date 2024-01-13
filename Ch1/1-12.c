#include <stdio.h>

int main()
{
  int c, last_is_word;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t')
    {
      if (last_is_word)
      {
        putchar('\n');
        last_is_word = 0;
      }
    }
    else
    {
      putchar(c);
      last_is_word = 1;
    }
  }
}