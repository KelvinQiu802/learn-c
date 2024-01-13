#include <stdio.h>

#define TAB_SIZE 8
#define MAX_LENGTH 1000

int get_line(char s[], int maxlength);
void detab(char s[], int tabsize);

int main() {
  int len;
  char line[MAX_LENGTH];

  while ((len = get_line(line, MAX_LENGTH)) > 0) {
    detab(line, TAB_SIZE);
  }

  return 0;
}

/* get_line: read line into c and return length */
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

void detab(char s[], int tabsize) {
  int i, cursor;

  for (i = 0, cursor = 0; s[i] != '\0'; ++i) {
    if (s[i] == '\t') {
      int nsapce = tabsize - (cursor % tabsize);
      while (nsapce > 0) {
        putchar(' ');
        ++cursor;
        --nsapce;
      }
    } else {
      putchar(s[i]);
      ++cursor;
    }
  }
}