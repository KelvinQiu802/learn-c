#include <ctype.h>
#include <stdio.h>
#include <string.h>

int htoi(char hex[]);

int main(int argc, char const *argv[]) {
  printf("%d\n", htoi("0xAF"));
  return 0;
}

/* htoi: convert hex string to integer */
int htoi(char hex[]) {
  int len = strlen(hex);
  int result = 0;

  /* loop from the last char to x, 0xAF */
  for (int i = 2; i < len; ++i) {
    int num;
    if (isdigit(hex[i])) {
      num = hex[i] - '0';
    } else {
      num = tolower(hex[i]) - 'a' + 10;
    }
    result = result * 16 + num;
  }

  return result;
}
