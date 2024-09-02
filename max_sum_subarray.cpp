#include <iostream>
#include <algorithm>
using namespace std;

int maxSubArraySum(int arr[], int size) {
    int max_so_far = arr[0];
    int current_max = arr[0];

    for(int i=1; i<size; i++) {
        current_max = max(arr[i], current_max + arr[i]);
        max_so_far = max(max_so_far, current_max);
    }
    return max_so_far;
}

int main() {
    int n;
    cout<<"Enter the no of elements in the array: ";
    cin>>n;

    int array[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }

    int max_sum = maxSubArraySum(array, n);

    cout<<"Maximum sub array sum is: "<<max_sum<<endl;
}