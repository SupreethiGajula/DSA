#include<iostream>
using namespace std;

void insertionsort(int arr[],int size){
    for(int i =1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(temp<arr[j]){
                arr[j+1] = arr[j];

            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
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

    insertionsort(arr, 5);
    printArray(arr, 5);
    return 0;
}


