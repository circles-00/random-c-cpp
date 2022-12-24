#include <stdio.h>

int isFirstTime = 1;

int divisibleByK(int n, int k) {
  if (n % k == 0) return 1;

  return 0;
}

int nextDivisibleByK(int n, int k) {
  if (isFirstTime) {
    isFirstTime = 0;
    n++;
  }

  if (divisibleByK(n, k)) {
    isFirstTime = 1;
    return n;
  }

  return nextDivisibleByK(n + 1, k);
}

int main(void) {
  int start, end, k;
  scanf("%d %d %d", &start, &end, &k);

  for (int i = start; i <= end; i++) {
    printf("%d -> %d \n", i, nextDivisibleByK(i, k));
  }

  return 0;
}