#include<bits/stdc++.h>
using namespace std;

int main() {
    // 2D Array
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Initializing 3x3 2D array
    
    // Printing 2D array
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}