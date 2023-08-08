#include <stdio.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int inddeletion(int arr[], int size, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = index; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
 
    return 1;
}

int main()
{
    int arr[100] = {7, 8 ,12, 27, 88};
    int size = 5, index = 0;
    printArray(arr, size);
    inddeletion(arr, size,100, index);
    size -=1;
    printArray(arr, size);

    return 0;
}