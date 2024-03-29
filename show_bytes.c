#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes (byte_pointer start, int len) {
  int i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

void show_int(int x) {
  show_bytes((byte_pointer) &x, sizeof(x));
}

void show_float(float x) {
  show_bytes((byte_pointer) &x, sizeof(x));
}

void show_pointer(void *x) {
  show_bytes((byte_pointer) &x, sizeof(x));
}

void test_show_bytes(int val) {
  int ival = val;
  float fval = (float) ival;
  int *pval = &ival;
  show_int(ival);
  show_float(fval);
  show_pointer(pval);
}

int main() {
  printf("figure 2.5--\n");
  test_show_bytes(12345);

  printf("practice problem 2.5--\n");
  int val = 0x87654321;
  byte_pointer valp = (byte_pointer) &val;
  show_bytes(valp, 1);
  show_bytes(valp, 2);
  show_bytes(valp, 3);
  show_bytes(valp, 4);

  printf("practice problem 2.7--\n");
  const char *s = "abcdef";
  show_bytes((byte_pointer) s, strlen(s));
}
