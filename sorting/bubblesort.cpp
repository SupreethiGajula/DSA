#include<iostream>
using namespace std;


int bubblesort(int arr[],int size){
    for (int i = 1;i<size;i++){
        bool swapped = false;
        for(int j = 0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }

    }
    return 0;
}

void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<"\t";
            }
}
int main(){
    int arr[5] = {4,3,2,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    cout<<"Sorted array is:";
    printArray(arr,size);
    return 0;


}