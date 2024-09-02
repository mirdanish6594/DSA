#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int addBinaryNumbers(int a, int b) {
   int ans = 0, carry = 0, place = 1;

   while(a>0 || b>0 || carry>0) {
     int x = a%10;
     int y = b%10;
     int sum = x + y + carry;
     carry = sum/2;
     sum = sum%2;

     ans += sum*place;
     place *=10;

     a/=10;
     b/=10;
   }
   return ans;
}
int main() {
    int a, b;
    cin>>a;
    cin>>b;
    cout<<addBinaryNumbers(a, b);
}