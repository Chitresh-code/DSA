#include<bits/stdc++.h>
using namespace std;

int main() {
    /*
    // Taking Multiple inputs
    int a, b, c, d, e, f, g, h, i, j;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    // Feels dumb right? That's why we use arrays
    */
    // Declaring an array
    int arr[10]; // Array of size 10
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    // Printing the array
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Modifying the array
    arr[0] = 10; // Changing the first element
    arr[3] += 16; // Adding 16 to the 4th element
    arr[5] = arr[0] + arr[3]; // Assigning the sum of 1st and 4th element to 6th element
    // Printing the array
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}