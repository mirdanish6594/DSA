#include <iostream>
using namespace std;

int main() {
    int n, size, current = 0;
    cout<<"Enter the no of elements in the array: ";
    cin>>n;

    int array[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }

    cout<<"Your array is: ";
    for(int i=0; i<n; i++) {
        cout<<array[i]<<",";
    }
    cout<<endl;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
             current += array[j];
             cout<<current<<",";
        }
    }
}