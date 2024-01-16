#include <stdio.h>

#define MAX_LENGTH 1000

int get_line(char s[], int maxlength);
void reverse(char s[], int len);

int main() {
  int len;
  char line[MAX_LENGTH];

  while ((len = get_line(line, MAX_LENGTH)) > 0) {
    reverse(line, len);
    printf("%s", line);
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

void reverse(char s[], int len) {
  int i = len / 2; /* swap i times */
  for (int j = 0; j < i; ++j) {
    int temp = s[j];
    s[j] = s[len - 1 - j];
    s[len - 1 - j] = temp;
  }
}