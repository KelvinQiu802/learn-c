#include <stdio.h>

#define DOUBLE_QUOTE '"'
#define SINGLE_QUOTE '\''
#define SLASH '/'
#define ASTERISK '*'

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    /* handle "" string */
    if (c == DOUBLE_QUOTE) {
      putchar(c);
      while ((c = getchar()) != DOUBLE_QUOTE) {
        putchar(c);
      }
      putchar(c);
    }
    /* handle '' char */
    else if (c == SINGLE_QUOTE) {
      putchar(c);
      while ((c = getchar()) != SINGLE_QUOTE) {
        putchar(c);
      }
      putchar(c);
    }
    /* handle comment */
    else if (c == SLASH && getchar() == ASTERISK) {
      while (1) {
        if (getchar() == ASTERISK && getchar() == SLASH) break;
      }
    } else {
      putchar(c);
    }
  }

  return 0;
}
