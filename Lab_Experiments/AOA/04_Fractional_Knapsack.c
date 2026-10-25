#include <stdio.h>
void printArrays(int n, float p[], float w[], float r[]) {
    printf("Profit:  ");
    for (int i = 0; i < n; i++) printf("%.1f\t", p[i]);
    printf("\nWeight:  ");
    for (int i = 0; i < n; i++) printf("%.1f\t", w[i]);
    printf("\nRatio:   ");
    for (int i = 0; i < n; i++) printf("%.2f\t", r[i]);
    printf("\n\n");
}
int main() {
    int n;
    float capacity, totalProfit = 0.0;
    printf("Enter number of items: ");
    scanf("%d", &n);
    float p[n], w[n], r[n], x[n];
    printf("Enter profits: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &p[i]);
    }
    printf("Enter weights: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &w[i]);
    }
    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);
    for (int i = 0; i < n; i++) {
        r[i] = p[i] / w[i];
        x[i] = 0.0;
    }
    printf("\n--- Initial Arrays ---\n");
    printArrays(n, p, w, r);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (r[j] < r[j + 1]) {
                float temp = r[j]; r[j] = r[j + 1]; r[j + 1] = temp;
                temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
                temp = w[j]; w[j] = w[j + 1]; w[j + 1] = temp;
            }
        }
    }
    printf("--- Arrays After Sorting by Ratio ---\n");
    printArrays(n, p, w, r);
    float remaining = capacity;
    for (int i = 0; i < n; i++) {
        if (w[i] <= remaining) {
            x[i] = 1.0;
            totalProfit += p[i];
            remaining -= w[i];
        } else {
            x[i] = remaining / w[i];
            totalProfit += p[i] * x[i];
            break;
        }
    }
    printf("--- Selected Fractions Array (x) ---\n");
    printf("x = [ ");
    for (int i = 0; i < n; i++) printf("%.2f ", x[i]);
    printf("]\n\n");
    printf("Total Maximum Profit = %.2f\n", totalProfit);
    return 0;
}
