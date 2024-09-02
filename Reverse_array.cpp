#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
   int start = 0, end = n - 1;
   while(start<end) {
    swap(arr[start], arr[end]);
    start++; 
    end--;
   }
}
int main() {
   int n;
   cout<<"Enter the no. of array elements: ";
   cin>>n;

   int array[n];
   cout<<"Enter the array elements: ";
   for(int i=0; i<n; i++) {
       cin>>array[i];
   }

   cout<<"Original array: ";
   for(int i=0; i<n; i++) {
       cout<<array[i]<<", ";
   }
   cout<<endl;

   reverseArray(array, n);

   cout<<"Reversed array: ";
   for(int i=0; i<n; i++) {
       cout<<array[i]<<", ";
   }
   cout<<endl;

}