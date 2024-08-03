#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> stk;
    stk.push(1); // {1}
    stk.push(2); // {2, 1}
    stk.push(3); // {3, 2, 1}
    stk.push(4); // {4, 3, 2, 1}
    stk.emplace(5); // {5, 4, 3, 2, 1}

    cout << stk.top() << endl;
    cout << stk.size() << endl;

    stk.pop();
    cout << stk.top() << endl;

    cout << stk.empty() << endl;

    stack<int> stk2;
    stk.swap(stk2);

    return 0;
}