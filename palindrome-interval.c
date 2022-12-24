#include <stdio.h>

int findReverseNumber(int input) {
  int digit, reversedNumber = 0;
  while (input) {
    digit = input % 10;
    reversedNumber = (reversedNumber * 10) + digit;
    input /= 10;
  }
  return reversedNumber;
}

int isPalindrome(int input) { return input == findReverseNumber(input); }

int containsDigits(int input) {
  if (!input) return 1;

  if (input % 10 > 4) return 0;
  return containsDigits(input / 10);
}

int main(void) {
  // Read interval from input
  int start, end;
  scanf("%d %d", &start, &end);

  // Find all palindromes in the interval
  for (int i = start; i <= end; i++) {
    if (isPalindrome(i) && containsDigits(i)) printf("%d \n", i);
  }
}