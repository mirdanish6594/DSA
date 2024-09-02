#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    for(int i=0; i<size - 1; i++) {
        for(int j=0; j<size - i - 1; j++) {
            if(array[j]>array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
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

    bubbleSort(array, n);

    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<array[i]<<",";
    }
}