#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Display the front element: "<<q.front()<<endl;

    q.pop();
    cout<<"Display the elements after pop: "<<q.front()<<endl;

    if(q.empty()) {
        cout<<"Queue is empty"<<endl;
    } else {
        cout<<"Queue is not empty"<<endl;
    }
}
