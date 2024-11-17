#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "Hello";
    char str2[] = "World!";
    strcat(str1, str2);
    cout<<str1<<endl;
}