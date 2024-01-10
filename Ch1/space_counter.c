#include <stdio.h>

int main()
{
  int c, space, tab, nl;

  space = tab = nl = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      space++;
    if (c == '\t')
      tab++;
    if (c == '\n')
      nl++;
  }

  printf("Space: %d\n", space);
  printf("Tab: %d\n", tab);
  printf("New Line: %d\n", nl);
}