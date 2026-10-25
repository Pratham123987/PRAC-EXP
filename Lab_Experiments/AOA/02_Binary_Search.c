#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (high+low)/2;
        if (arr[mid]==target)
        {
            return mid;
        }
        if (arr[mid]<target)
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int size ,  target;
    printf("enter the number of elements in array: ",size);
    scanf("%d",&size);
    int data[size];
    printf("enter the sorted array: ");
     for (int i = 0; i < size; i++)
     {
        printf("Element %d: ", i);
        scanf("%d", &data[i]);
     }
    printf("Enter the value to search for: ");
    scanf("%d", &target);
    int result = binarySearch(data, size, target);
    if (result != -1)
    {
        printf("\nSuccess: Element found at index %d.\n", result);
    }
    else
    {
        printf("\nFailure: Element not found in the array.\n");
    }
    return 0;
}
