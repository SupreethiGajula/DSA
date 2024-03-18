#include <iostream>
using namespace std;

void selectionsort(int arr[], int size)
{
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++)
    {
        min_idx = i; // Assume the  first element is the smallest one.
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
    }
}

void printArray(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        cout << arr[i] << "\t";
        i++;
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionsort(arr, 5);
    printArray(arr, 5);
    return 0;
}