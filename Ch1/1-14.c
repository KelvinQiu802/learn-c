#include <stdio.h>

#define NUM_CHARACTERS 128  // ASCII

void draw_histogram(int freq[]);

int main() {
  char c;
  int freq[NUM_CHARACTERS], i;

  for (i = 0; i < NUM_CHARACTERS; ++i) {
    freq[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= 0 && c <= NUM_CHARACTERS) {
      ++freq[c];
    }
  }

  draw_histogram(freq);

  return 0;
}

void draw_histogram(int freq[]) {
  int i;

  for (i = 0; i < NUM_CHARACTERS; ++i) {
    printf("%c: ", i);
    int j;
    for (j = 0; j < freq[i]; ++j) {
      printf("X");
    }
    printf("\n");
  }
}