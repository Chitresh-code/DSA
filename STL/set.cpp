#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    // stores sorted and unique values
    s.insert(1); // {1}
    s.insert(4); // {1, 4}
    s.insert(2); // {1, 2, 4}
    s.insert(2); // {1, 2, 4} -> stays the same does not store the same value again
    s.emplace(5); // {1, 2, 4, 5}
    s.insert(3); // {1, 2, 3, 4, 5}

    // Functionality of insert in vector can also be used, it only increases the efficiency

    // begin() end() rbegin() rend() size() empty() and swap() are the same as others

    auto it = s.find(3);
    cout << *it << endl;

    it = s.find(6);
    cout << *it << endl;

    // s.erase(5);

    // it = s.find(1);
    // s.erase(it);

    // count() will return either 1 or 0 as there are no dublicate values
    // cout << s.count(1) << endl;
    // cout << s.count(6) << endl;

    // auto it1 = s.find(2);
    // auto it2 = s.find(4);
    // s.erase(it1, it2);

    auto lb = s.lower_bound(2);
    auto ub = s.upper_bound(3);
    cout << *lb << " " << *ub << endl;

    for(auto it : s) {
        cout << it << " ";
    }

    return 0;
}