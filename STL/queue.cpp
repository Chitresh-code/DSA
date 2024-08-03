#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2,}
    q.push(3); // {1, 2, 3}
    q.emplace(5); // {1, 2, 3, 5}

    cout << q.back() << endl;
    cout << q.front() << endl;

    q.back() += 5; // 10
    cout << q.back() << endl;

    q.pop();
    cout << q.front() << endl;

    // size, empty and swap are same as stack

    return 0;
}