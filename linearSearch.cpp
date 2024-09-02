#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(array[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target;
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

    cout<<"Enter the element you want to search: ";
    cin>>target;
    cout<<endl;

    int result = linearSearch(array, n, target);

    if(result != -1) {
        cout<<"Element found at index: "<<result<<endl;
    } else {
        cout<<"Element not found in the array"<<endl;
    }
}