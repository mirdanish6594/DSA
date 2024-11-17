#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "Will to power!";
    char sub[] = "power";

    char *pos = strstr(str, sub);
    if(pos) {
        cout<<"Substring found at position "<<(pos - str)<<endl;
    } else {
        cout<<"Substring not found"<<endl;
    }
}