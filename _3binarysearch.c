#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
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
    int element;
    int arr[] = {1, 2, 12, 13, 15, 16, 25, 28, 29, 45, 50};
    int size = sizeof(arr) / sizeof(int);
    printf("enter the element you can search in the array");
    scanf("%d", &element);
    int searchIndex = binarysearch(arr, size, element);
    printf("the element %d was found at index %d\n", element, searchIndex);

    return 0;
}