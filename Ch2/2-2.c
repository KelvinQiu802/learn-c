#include <stdio.h>

int main() {
  int lim = 1000;

  for (int i = 0; i < lim - 1; ++i) {
    char c = getchar();
    if (c == '\n') break;
    if (c == EOF) break;
  }

  return 0;
}
