#include <stdio.h>

#define MAX_LINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* Print the longest input line */
int main() {
  int len; /* current line length */
  int max; /* maximum length */

  char line[MAX_LINE];    /* current line */
  char longest[MAX_LINE]; /* longest line */

  max = 0;

  while ((len = get_line(line, MAX_LINE)) > 0) {
    if (len > max) {
      max = len;
      copy(line, longest);
    }
  }

  if (max > 0) {
    printf("%s\nLength: %d\n", longest, max);
  }

  return 0;
}

/* get_line: read a line into s, return length*/
int get_line(char s[], int maxline) {
  int c, i;

  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  /* reach the maximum length, just increase i without read into s */
  if (c != EOF) {
    while ((c = getchar()) != EOF && c != '\n') {
      ++i;
    }
  }

  s[i] = '\0';

  return i;
}

/* copy 'from' into 'to' */
void copy(char from[], char to[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}