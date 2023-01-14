#include <stdio.h>
#include <string.h>

int main(void) {
  char string[100];
  char reversed[100];

  // Read from input into string
  scanf("%s", string);

  int n = strlen(string);
  int mid = n / 2;
  char temp;
  for (int i = 0; i < mid; i++) {
    temp = string[i];
    string[i] = string[i + mid];
    string[i + mid] = temp;
  }

  printf("%s\n", string);
}