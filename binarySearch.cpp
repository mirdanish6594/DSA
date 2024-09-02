#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while(left<=right) {
        int mid = left + (right - left)/2; // this prevents potential overflow

        if(array[mid]==target) {
            return mid;
        }

        if(array[mid]<target) {
            left = mid + 1;
        }

        if(array[mid]>target) {
            right = mid - 1;
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

    cout<<"Enter the target element to search for: ";
    cin>>target;

    int result = binarySearch(array, n, target);

    if(result != -1) {
        cout<<"Element found at index: "<<result<<endl;
    } else {
        cout<<"Element not found in the array"<<endl;
    }
}