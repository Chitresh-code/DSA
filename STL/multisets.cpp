#include <bits/stdc++.h>
using namespace std;

int main() {
    // everything same as set but stores duplicate values
    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(4); // {1, 4}
    ms.insert(2); // {1, 2, 4}
    ms.insert(2); // {1, 2, 2, 4}
    ms.emplace(5); // {1, 2,2, 4, 5}
    ms.insert(3); // {1, 2, 2, 3, 4, 5}

    // ms.erase(2); // all 2 are erased

    auto cnt = ms.count(2); // returns 2
    cout << cnt << endl;

    // ms.erase(ms.find(2)); // only erases a single 2

    for (auto it : ms) {
        cout << it << " ";
    }

    // rest functions are same as set

    return 0;
}