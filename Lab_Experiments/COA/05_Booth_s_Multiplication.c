#include <stdio.h>
void arithmeticRightShift(int *A, int *Q, int *Q_1, int n) {
    int MSB_A = (*A >> (n - 1)) & 1;
    int LSB_A = *A & 1;
    int LSB_Q = *Q & 1;
    *A = (*A >> 1) | (MSB_A << (n - 1));
    *Q = (*Q >> 1) | (LSB_A << (n - 1));
    *Q_1 = LSB_Q;
}
int main() {
    int M, Q, A = 0, Q_1 = 0;
int n = 8;
printf("Enter Multiplicand (M): ");
scanf("%d", &M);
printf("Enter Multiplier (Q): ");
scanf("%d", &Q);
M = M & 0xFF;
Q = Q & 0xFF;
for (int i = 0; i < n; i++) {
    int Q_0 = Q & 1;
    if (Q_0 == 0 && Q_1 == 1) {
        A = (A + M) & 0xFF;
    } else if (Q_0 == 1 && Q_1 == 0) {
        A = (A - M) & 0xFF;
    }
    arithmeticRightShift(&A, &Q, &Q_1, n);
}
int result = (A << 8) | Q;
if (result & 0x8000) {
    result |= 0xFFFF0000;
}
    printf("Product = %d\n", result);
    return 0;
}
