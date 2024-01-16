#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
  /* code */
  char s1[100] = "Hello World\n";
  char s2[100] = "lol";

  squeeze(s1, s2);

  printf("%s", s1);

  return 0;
}

/* squeeze: deletes each char in s1 that matches any char in s2 */
void squeeze(char s1[], char s2[]) {
  int i, j, k = 0;
  for (i = 0; s1[i] != '\0'; ++i) {
    for (j = 0; s2[j] != '\0'; ++j) {
      if (s1[i] == s2[j]) {
        break;
      }
    }
    if (s2[j] == '\0') /* no match char */
      s1[k++] = s1[i];
  }
  s1[k] = '\0';
}
