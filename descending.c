#include <stdio.h>

int main() {
  int numbers[100];

    int n = 0;
    while (1) {
      int numberFromInput;
      if(scanf("%d", &numberFromInput) != 1)
        break;
      numbers[n] = numberFromInput;
      n++;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
      int number = numbers[i];
      int isDescending = 0;
      int previousDigit = 0;
      while (number > 0) {
        int lastDigit = number % 10;
        number /= 10;
        if(lastDigit > previousDigit)
          isDescending = 1;
        else
          isDescending = 0;
        previousDigit = lastDigit;
      }

      if(isDescending)
        sum += numbers[i];
    }

    if(sum)
      printf("%d\n", sum);
    else
      printf("NEMA\n");
}
