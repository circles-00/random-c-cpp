#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  FILE* file = fopen("text.txt", "r");  // Open the file for reading

  if (file == NULL) {  // Check if the file was successfully opened
    printf("Error opening file\n");
    return 1;
  }

  char line[100];
  int lowerCount = 0;
  int upperCount = 0;
  int charCount = 0;
  while (fgets(line, sizeof(line), file)) {  // Read a line from the file
    for (int i = 0; line[i] != '\0'; i++) {
      if (isalnum(line[i])) {
        charCount++;
        char lowerCase = tolower(line[i]);
        char upperCase = toupper(line[i]);

        if (line[i] == lowerCase) lowerCount++;
        if (line[i] == upperCase) upperCount++;
      }
    }  // Print the line to the console
  }

  printf("Total characters: %d %d %d\n", charCount, lowerCount, upperCount);

  printf("Lowercase frequency: %f\n", (float)lowerCount / charCount);
  printf("Uppercase frequency: %f\n", (float)upperCount / charCount);

  fclose(file);  // Close the file
  return 0;
}