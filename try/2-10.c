#include <stdio.h>

char lower(char c);

int main(int argc, char const *argv[]) {
  printf("%c\n", lower('A'));
  printf("%c\n", lower('b'));
  printf("%c\n", lower('D'));
  return 0;
}

char lower(char c) { return c >= 97 && c <= 122 ? c : c - 'A' + 'a'; }