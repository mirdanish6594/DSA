#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
    for(int i=1; i<size; i++) {
       int key = array[i];
       int j = i-1;

       while(j>=0 && array[j]>key) {
        array[j+1] = array[j];
        j = j-1;
       }
       array[j+1] = key;
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
    cout<<"The array elements are: ";
    for(int i=0; i<n; i++) {
        cout<<array[i]<<",";
    }
    cout<<endl;

    insertionSort(array, n);

    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<array[i]<<",";
    }
}