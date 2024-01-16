#include <stdio.h>

#define MAX_LENGTH 1000
#define TAB_SIZE 4
#define IN 1
#define OUT 0

int get_line(char s[], int maxlength);

int main() {
  int len, state;
  char line[MAX_LENGTH];

  state = OUT;

  while ((len = get_line(line, MAX_LENGTH)) > 0) {
    int i = 0;
    while (i < len) {
      if (line[i] == ' ' && state == IN) {
        /* the first space after the word */
        state = OUT;
        int nblank = 0;
        while (line[i] == ' ') {
          ++nblank;
          ++i;
        }
        int ntab = nblank / TAB_SIZE;
        int nspace = nblank - ntab * TAB_SIZE;
        for (int n = 0; n < ntab; ++n) {
          putchar('^');
        }
        for (int n = 0; n < nspace; ++n) {
          putchar(' ');
        }
      } else {
        putchar(line[i]);
        state = IN;
        ++i;
      }
    }
  }

  return 0;
}

int get_line(char s[], int maxlength) {
  int c, i;

  for (i = 0; i < maxlength - 1 && ((c = getchar()) != EOF && c != '\n'); ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}