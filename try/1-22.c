#include <stdio.h>

#define MAX_LENGTH 1000
#define TARGET_LENGTH 20

int get_line(char s[], int maxlength);

int main() {
  int len;
  char line[MAX_LENGTH];

  while ((len = get_line(line, MAX_LENGTH)) > 0) {
    int cursor = -1;
    int start = 0;
    while ((cursor = cursor + TARGET_LENGTH) < len) {
      /* find target point */
      if (line[cursor] == ' ') {
        /* find the first non-space char */
        while (line[cursor] == ' ') --cursor;
      } else {
        /* find the space and then find the first non-space char */
        while (line[cursor] != ' ') --cursor;
        while (line[cursor] == ' ') --cursor;
      }
      /* print result */
      while (start <= cursor) {
        putchar(line[start]);
        ++start;
      }
      /* next line */
      putchar('\n');
      start = cursor + 1;
    }
    /* print the remaining chars*/
    start = cursor - TARGET_LENGTH + 1;
    while (start < len) {
      putchar(line[start]);
      ++start;
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