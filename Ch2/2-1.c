#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
  printf("%4s\t%4s\t%3s\n", "Type", "Byte", "Bit");
  printf("-------------------\n");
  /* char */
  printf("%4s\t%4zu\t%3lu\n", "CHAR", sizeof(char), sizeof(char) * 8);
  /* int */
  printf("%4s\t%4zu\t%3lu\n", "INT", sizeof(int), sizeof(int) * 8);
  printf("%4s\t%4zu\t%3lu\n", "SHRT", sizeof(short), sizeof(short) * 8);
  printf("%4s\t%4zu\t%3lu\n", "LONG", sizeof(long), sizeof(long) * 8);
  /* float */
  printf("%4s\t%4zu\t%3lu\n", "FLT", sizeof(float), sizeof(float) * 8);
  /* double */
  printf("%4s\t%4zu\t%3lu\n", "DBL", sizeof(double), sizeof(double) * 8);
  printf("%4s\t%4zu\t%3lu\n", "LDBL", sizeof(long double),
         sizeof(long double) * 8);
  return 0;
}
