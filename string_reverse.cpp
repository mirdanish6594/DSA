#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[]) {
    int n = strlen(str);
    for(int i=0; i<n/2; i++) {
        swap(str[i], str[n - i -1]);
    }
}

int main() {
    char str[] = "Will to power!";
    reverseString(str);
    cout<< str <<endl;
}