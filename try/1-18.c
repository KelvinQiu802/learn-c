#include <stdio.h>

#define MAX_LENGTH 1000

int get_line(char s[], int maxlength);
int trim(char s[], int len);
int trim_start(char s[], int len);
int trim_end(char s[], int len);

int main() {
  int len;
  char line[MAX_LENGTH];

  while ((len = get_line(line, MAX_LENGTH)) > 0) {
    len = trim(line, len);
    printf("%s\nLength: %d\n", line, len);
  }

  return 0;
}

int get_line(char s[], int maxlength) {
  int c, i;

  for (i = 0; i < maxlength - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

int trim(char s[], int len) {
  len = trim_start(s, len);
  len = trim_end(s, len);
  return len;
}

int trim_start(char s[], int len) {
  int i, mark;

  /* trim left */
  /* find the first non-blank char */
  i = 0;
  while (i < len && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')) {
    ++i;
  }

  /* remove the left blanks */
  for (int j = 0; j <= len; ++j) {
    s[j] = s[j + i];
  }

  return len - i;
}

int trim_end(char s[], int len) {
  int i = len - 1; /* s[len] = '\0' */
  while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')) {
    --i;
  }
  s[i + 1] = '\0';

  return i + 1;
}