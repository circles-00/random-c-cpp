#include <stdio.h>
#include <string.h>

void toLowerCase(char c) { c + 32; }

void toUpperCase(char c) { c - 32; }

char* checkIfCIsIncludedKTimes(int K, char C, char** string) {
  char* NONE = "NONE";
  char lowerCaseC = C;
  char upperCaseC = C;
  toLowerCase(lowerCaseC);
  toUpperCase(upperCaseC);
  int countAll = 0;

  for (int i = 0; i < sizeof(string); i++) {
    int count = 0;
    char* currentString = string[i];
    for (int j = 0; j < strlen(currentString); j++) {
      char currentChar = currentString[j];
      if (currentChar == lowerCaseC || currentChar == upperCaseC) {
        count++;
      }
    }

    if (count == K) {
      countAll++;
      return currentString;
    }

    if (countAll == 0) return NONE;
  }
}

int main(void) {
  int N, K;
  char C;
  char* strings[100];

  scanf("%d %d %c", &N, &K, &C);

  for (int i = 0; i < N; i++) {
    char string[100];
    scanf("%s", string);
    strings[i] = string;
  }

  printf("%s\n", checkIfCIsIncludedKTimes(K, C, strings));
}