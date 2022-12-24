#include <stdio.h>

int main(void) {
	int n;
    scanf("%d", &n);

    int previousNumber = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
      int numberFromInput;
      scanf("%d", &numberFromInput);

      int diff = numberFromInput - previousNumber;
      if(diff > max)
        max = diff;
      previousNumber = numberFromInput;
    }

  printf("Najgolema razlika: %d\n", max);   
}
