#include <iostream>
using namespace std;

int main() {
    int n, size;
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
    
    int cd = 1;
    cout<<"Enter the common differrence: ";
    cin>>cd;
    int ans = 2;
    int j = 2;
    int current = 2;

    while(j<n) {
        if(cd == array[j] - array[j-1]) {
            current++;
        } else {
            cd = array[j] - array[j-1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    } 

    cout<<"Answer: "<<ans;
}