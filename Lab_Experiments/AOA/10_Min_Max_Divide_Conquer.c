#include <stdio.h>
struct MinMax
{
    int min;
    int max;
};
struct MinMax findMinMax(int arr[], int low, int high)
{
    struct MinMax result, left, right;
    int mid;
    if (low == high)
    {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }
    if (high == low + 1)
    {
        if (arr[low] < arr[high])
        {
            result.min = arr[low];
            result.max = arr[high];
        }
        else
        {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }
    mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);
    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;
    return result;
}
int main()
{
    int arr[100];
    int n, i;
    struct MinMax result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = findMinMax(arr, 0, n - 1);
    printf("\nMinimum Element = %d\n", result.min);
    printf("Maximum Element = %d\n", result.max);
    return 0;
}
