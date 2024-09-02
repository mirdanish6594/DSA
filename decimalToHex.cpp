#include <iostream>
using namespace std;

string decimalToHex(int n) {
    if (n == 0) return "0";  
    string hexChars = "0123456789ABCDEF";
    string result = "";

    unsigned int un = static_cast<unsigned int>(n);  

    while (un > 0) {
        int remainder = un % 16;
        result = hexChars[remainder] + result;  
        un /= 16;
    }

    return result;
}
int main() {
    int n;
    cin >> n;
    cout << decimalToHex(n) << endl;
    return 0;
}
