#include <stdio.h>

/* Prints a horizontal histogram of the lengths of words */

#define MAX_LENGTH 10
#define IN_WORD 1
#define OUT_WORD 0

void draw_histogram(int lengths[]);

int main() {
  int c, i, state, len;
  int lengths[MAX_LENGTH];

  len = 0;
  state = OUT_WORD;

  for (i = 0; i < MAX_LENGTH; ++i) {
    lengths[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN_WORD) {
        ++lengths[len - 1];
        len = 0;
        state = OUT_WORD;
      }
    } else {
      if (state == OUT_WORD) {
        len = 1;  // first char
        state = IN_WORD;
      } else {
        ++len;
      }
    }
  }

  draw_histogram(lengths);

  return 0;
}

void draw_histogram(int lengths[]) {
  int i;

  for (i = 0; i < MAX_LENGTH; ++i) {
    printf("%2d: ", i + 1);
    int j;
    for (j = 0; j < lengths[i]; ++j) {
      printf("X");
    }
    printf("\n");
  }
}