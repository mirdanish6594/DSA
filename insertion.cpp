#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int element, int position) {
    for(int i=size; i>position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    size++;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int element = 25, position = 2;

    insertElement(arr, size, element, position);

    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}