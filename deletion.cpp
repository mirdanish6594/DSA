#include <iostream>
using namespace std;

void deleteElement(int arr[], int &size, int position) {
    for(int i=position; i<size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size=5, position=2;

    deleteElement(arr, size, position);

    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}