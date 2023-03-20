#include <iostream>
#include <queue>
#include <ctime>

using namespace std;
int main() {
    queue<int> q;
    // insert elements in the queue randomly

    for (int i = 0; i < 10; i++) {
        q.push(rand() % 100);
    }

    // print all elements of the queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}