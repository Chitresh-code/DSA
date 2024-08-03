#include<bits/stdc++.h>
using namespace std;

int main() {
    // max heap
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(8); // {8, 5}
    pq.push(2); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << endl; // largest element -> 10

    pq.pop();
    cout << pq.top() << endl; // new largest element -> 8

    // size, empty and swap are same as stack

    // min heap
    priority_queue<int, vector<int>, greater<int>> mh;
    mh.push(5); // {5}
    mh.push(8); // {5, 8}
    mh.push(2); // {2, 5, 8}
    mh.emplace(10); // {2, 5, 8, 10}

    cout << mh.top() << endl; // smallest element -> 2

    pq.pop();
    cout << pq.top() << endl; // new smallest element -> 5

    return 0;
}