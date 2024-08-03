#include <bits/stdc++.h>
using namespace std;

int main() {
    // pair<int, int> p = {1, 3};
    // cin >> p.first >> p.second;
    // cout << p.first << " " << p.second << endl;

    // pair<int, pair<int, int>> p = {1, {2, 3}};
    // cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    for(int i = 0;i < 3;i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    return 0;
}