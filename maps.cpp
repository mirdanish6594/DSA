#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap;

    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Orange";

    // Access elements by key
    cout<<"Element with key 2: "<<myMap[2]<<endl;

    // Iterate through the map
    cout<<"All elements in the map: "<<endl;
    for(auto it : myMap) {
        cout<<it.first<<" -> "<<it.second<<endl;
    }

}
