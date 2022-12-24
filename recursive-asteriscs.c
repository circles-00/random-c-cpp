#include <stdio.h>

void form(int n) {
  if (n == 0) return;
  for (int i = 0; i < n; i++) printf("*");
  printf("\n");
  form(n - 1);
}

int main(void) {
  int n;
  scanf("%d", &n);
  form(n);
  return 0;
}