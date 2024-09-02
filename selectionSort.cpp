#include <iostream>
using namespace std;

void selectionSort(int array[], int size) {
    for(int i=0; i<size-1; i++) {
        int minIndex = i;
        for(int j= i + 1; j< size; j++) {
            if(array[j] < array[minIndex]) {
               minIndex = j;
            }
        }
    int temp = array[minIndex];
    array[minIndex] = array[i];
    array[i] = temp;
    }
}

int main() {
    int n;
    cout<<"Enter the no. of array elements: ";
    cin>>n;

    int array[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }

    cout<<"The array elements are: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<array[i]<<",";
    }
    cout<<endl;


    selectionSort(array, n);
     
    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<array[i]<<",";
    }
    cout<<endl;
}