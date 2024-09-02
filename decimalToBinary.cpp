#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0;
    int x = 1;
    while(n>0) {
        int y = n%2;
        ans += x*y;
        x *= 10;
        n /= 2;
    }
    return ans;
}

int main() {
    int n;
    cin>> n;
    cout<< decimalToBinary(n);
}