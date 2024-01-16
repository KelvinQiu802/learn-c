#include <stdio.h>

int any(char s1[], char s2[]);

int main(int argc, char const *argv[]) {
  char s1[100] = "Hello World";
  char s2[100] = "lol";

  printf("%d\n", any(s1, s2));

  return 0;
}

/* any: return index in s1 where any char from s1 occurs in s2 */
int any(char s1[], char s2[]) {
  int i, j;
  for (i = 0; s1[i] != '\0'; ++i) {
    for (j = 0; s2[j] != '\0'; ++j) {
      if (s1[i] == s2[j]) {
        break;
      }
    }
    if (s2[j] != '\0') break;
  }
  if (s1[i] == '\0')
    return -1;
  else
    return i;
}