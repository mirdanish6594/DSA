#include <iostream>
using namespace std;
// Maximum until the given index
int main() {
    int n, size, ith_index;
    cout<<"Enter the no of elements in the array: ";
    cin>>n;

    int array[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }

    cout<<"Your array is: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<array[i]<<",";
    }
    cout<<endl;

    cout<<"Enter the index of the element until which you want to find the max: ";
    cin>>ith_index;
    int max = array[0];
    for(int i=0; i<=ith_index; i++) {
       if(array[i]>max) {
        max = array[i];
       }
    }

    cout<<"Max until the index "<<ith_index<<" is: "<<max<<endl;
}