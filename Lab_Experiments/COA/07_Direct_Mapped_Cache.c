#include <stdio.h>
#include <stdlib.h>
#define MAX_LINES 100
int main() {
  int cache[MAX_LINES];
  int status[MAX_LINES];
  int num_lines, block_num, choice;
  int cache_line, i;
  system("cls");
  printf("Enter the number of cache lines: ");
  scanf("%d", &num_lines);
  for (i = 0; i < num_lines; i++) {
     status[i] = 0;
    cache[i] = -1;
}
do {
    printf("\n==========================================\n");
    printf("Enter the memory block number to access: ");
    scanf("%d", &block_num);
    cache_line = block_num % num_lines;
    printf("\nCalculated Cache Line = %d\n", cache_line);
    if (status[cache_line] == 1 && cache[cache_line] == block_num) {
        printf("Result: >>> CACHE HIT <<<\n");
    } else {
        printf("Result: >>> CACHE MISS <<<\n");
        cache[cache_line] = block_num;
        status[cache_line] = 1;
        printf("Loaded Block %d into Cache Line %d.\n", block_num, cache_line);
    }
    printf("\n--- CURRENT CACHE STATE ---\n");
      printf("Line\tStored Block\tStatus\n");
      for (i = 0; i < num_lines; i++) {
          if (status[i] == 1) {
              printf("%d\tBlock %d\t\tOccupied\n", i, cache[i]);
          } else {
              printf("%d\t---\t\tEmpty\n", i);
          }
      }
      printf("---------------------------\n");
      printf("\nDo you want to access another block? (1 for Yes, 0 for No): ");
      scanf("%d", &choice);
    } while (choice == 1);
    return 0;
}
