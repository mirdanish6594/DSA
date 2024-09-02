#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int hexToDecimal(string n) {
    int ans = 0;
    int base = 1;
    int len = n.length();

    for(int i = len-1; i>=0; i--) {
        if(n[i]>= '0' && n[i]<= '9') {
            ans += (n[i] - '0')*base;
        }
        else if(n[i]>= 'A' && n[i]<= 'F') {
            ans += (n[i] - 'A' + 10)*base;
        } 
        else if(n[i]>= 'a' && n[i]<= 'f') {
            ans += (n[i] - 'a' + 10)*base;
        }
        base *= 16;
    }
    return ans;
}

int main() {
    string n;
    cin>>n;
    cout<<hexToDecimal(n);
}