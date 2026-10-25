#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *fp;
  char buffer[256];
  // 1. Creating and writing data to a file ("w" mode)
fp = fopen("sample.txt", "w");
if (fp == NULL) {
    printf("Error: Unable to open file for writing.\n");
    exit(1);
}
printf("Writing initial data to sample.txt...\n");
fprintf(fp, "Course: Computer Organization and Architecture Lab\n");
fprintf(fp, "Experiment 10: Basic File Operations in C\n");
fclose(fp);
printf("File created and initial data written successfully.\n\n");
// 2. Appending data to the file ("a" mode)
fp = fopen("sample.txt", "a");
if (fp == NULL) {
    printf("Error: Unable to open file for appending.\n");
    exit(1);
}
printf("Appending data to sample.txt...\n");
fprintf(fp, "Appended Line: Demonstrating append mode preserving existing data.\n");
fclose(fp);
printf("Data appended successfully.\n\n");
    // 3. Reading and displaying file contents ("r" mode)
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error: Unable to open file for reading.\n");
        exit(1);
    }
    printf("--- Reading contents of sample.txt ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    printf("--------------------------------------\n");
    fclose(fp);
    return 0;
}
