#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int S[MAX];
int subset[MAX];
int n;
int target;
int found = 0;
void sortSet() {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (S[j] < S[min_idx])
                min_idx = j;
        }
        temp = S[min_idx];
        S[min_idx] = S[i];
        S[i] = temp;
    }
}
void subsetSum(int index, int subSize, int current_sum) {
    if (current_sum == target) {
        found = 1;
        printf("{ ");
        for (int i = 0; i < subSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }
    if (current_sum > target || index >= n) {
        return;
    }
    for (int i = index; i < n; i++) {
        subset[subSize] = S[i];
        current_sum += S[i];
        subsetSum(i + 1, subSize + 1, current_sum);
        current_sum -= S[i];
    }
}
int main() {
    printf("Enter the number of elements in the set (Max %d): ", MAX);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &S[i]) != 1 || S[i] < 0) {
            printf("Invalid input. Please enter positive integers only.\n");
            return 1;
        }
    }
    printf("Enter the target sum (X): ");
    if (scanf("%d", &target) != 1 || target < 0) {
        printf("Invalid target sum.\n");
        return 1;
    }
    sortSet();
    printf("\nSorted Set S: { ");
    for(int i = 0; i < n; i++) {
        printf("%d ", S[i]);
    }
    printf("}\n");
    printf("Target Sum X: %d\n\n", target);
    printf("Subsets matching the target sum:\n");
    subsetSum(0, 0, 0);
    if (!found) {
        printf("No valid subset found.\n");
    }
    return 0;
}
