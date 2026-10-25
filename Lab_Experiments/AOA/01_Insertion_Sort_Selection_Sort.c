#include<stdio.h>
#include<conio.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the array elements: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The entered array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    int choice;
    printf("\nSelect a sorting algorithm\n");
    printf("1.Isertion sort\n");
    printf("2.selection sort\n");
    printf("enter choice 1 or 2 : ");
    scanf("%d",&choice);
    if (choice == 1) {
        insertionSort(array, n);
        printf("\nArray sorted using Insertion Sort: ");
    }
    else if (choice == 2) {
        selectionSort(array, n);
        printf("\nArray sorted using Selection Sort: ");
    }
    else {
        printf("\nInvalid choice! Exiting program.\n");
        return 1; // Terminates the program early if choice is invalid
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
