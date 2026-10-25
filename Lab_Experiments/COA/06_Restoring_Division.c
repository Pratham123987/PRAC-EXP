#include <stdio.h>
int main() {
  int Q, M;
  int A = 0;
  int n = 8;
  printf("Enter Dividend (Q): ");
  scanf("%d", &Q);
  printf("Enter Divisor (M): ");
  scanf("%d", &M);
  if (M == 0) {
      printf("Error: Division by zero is not allowed.\n");
      return 0;
  }
  for (int i = 0; i < n; i++) {
      A = (A << 1) | ((Q >> (n - 1)) & 1);
      Q = (Q << 1) & 0xFF;
        A = A - M;
        if (A < 0) {
            A = A + M;
        } else {
            Q = Q | 1;
        }
    }
    printf("\nQuotient = %d\n", Q);
    printf("Remainder = %d\n", A);
    return 0;
}
