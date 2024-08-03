#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialization and adding values
    // vector<int> v;

    // v.push_back(1); // adds an existing object to the end of a container
    // v.emplace_back(2); // constructs the object in place at the end of the container
    // cout << v[0] << " " <<v[1] << endl;

    // vector<pair<int, int>> v;
    // v.push_back({1, 2}); //have to tell it is a pair
    // v.emplace_back(3, 4); // assumes it to be a pair

    // for(int i = 0;i < 2;i++) {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    // initializing values
    // vector<int> v(5, 10);
    // for(int i = 0;i < 5;i++)
    //     cout << v[i] << " ";

    // vector<int> v(5); // initializes with 0 or garbage (depending on the compiler)
    // for(int i = 0;i < 5;i++)
    //     cout << v[i] << " ";

    // vector<int> v1(5, 20);
    // vector<int> v2(v1);
    // for(int i = 0;i < 5;i++)
    //     cout << v2[i] << " ";

    // user input
    // vector<int> v;
    // int n;
    // cin >> n;
    // for(int i = 0;i < n;i++) {
    //     int temp;
    //     cin >> temp;
    //     v.push_back(temp);
    // }

    // using at() function
    // for (int i = 0;i < n;i++) {
    //     cout << v.at(i) << " ";
    // }

    // vector<int> v = {10, 20, 30, 40, 50};

    // iterator
    // vector<int>::iterator it = v.begin();
    // cout << *it << endl;

    // it++;
    // cout << *it << endl;

    // it = it+2;
    // cout << *it << endl;

    // vector<int>::iterator it = v.end();
    // cout << *(it-1) << endl;

    // reverse iterator
    // vector<int>::reverse_iterator it = v.rend();
    // cout << *(--it) << endl;

    // it--;
    // cout << *it << endl;

    // it = it-2;
    // cout << *it << endl;

    // vector<int>::reverse_iterator it = v.rbegin();
    // cout << *(it) << endl;

    // first and last value using front() and back()
    //cout << v.front();
    // cout << v.back();

    // looping
    // for(vector<int>::iterator it = v.begin();it != v.end();it++) {
    //     cout << *it << " ";
    // }

    // for(auto it = v.begin();it != v.end();it++) {
    //     cout << *it << " ";
    // }

    // for(auto it : v) {
    //     cout << it << " ";
    // }

    //deletion
    // v.erase(v.begin() + 1);
    // v.erase(v.begin() + 2, v.begin() + 4);

    // inserting values using insert()

    // vector<int> v(2, 100);
    // v.insert(v.begin(), 300);
    // v.insert(v.begin(), 2, 100);

    // vector<int> copy(2, 50);
    // v.insert(v.begin(), copy.begin(), copy.end());

    // // size() function
    // cout << v.size() << endl;

    // // pop_back() function -> removing the last element
    // v.pop_back();

    // // swap()
    // v.swap(copy);

    // // erase the entire vector
    // v.clear();

    // // check if the vector is empty
    // cout << v.empty();

    return 0;
}