#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter the no. of elements in the array: "<<endl;
   cin>>n;

   int array[n];
   cout<<"Enter the array elements: "<<endl;
   for(int i=1; i<=n; i++) {
      cin>>array[i];
   }

   cout<<"The array elements are: "<<endl;
   for(int i=1; i<=n; i++) {
    cout<<array[i]<<" ";
   }
   cout<<endl;

   int max=array[0], min=array[0];
   for(int i=1; i<=n; i++) {
    if(array[i]>max) {
        max = array[i];
    }
    if(array[i]<max) {
        min = array[i];
    }
   }
   cout<<"Max: "<<max<<endl;
   cout<<"Min: "<<min<<endl;
}