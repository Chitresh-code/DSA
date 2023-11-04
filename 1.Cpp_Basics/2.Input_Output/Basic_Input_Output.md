## Learning Basic Input Output in C++

### Contents:
- Basic Structure of a main function
- Printing Output to the console
- Taking Input from the console

Copy the code and paste to run it on your console

### 1. Basic Structure of a main function

- Header file for input output stream
```cpp 
#include<iostream>
```

- Basic structure of a main function
```cpp
#include<iostream>

int main() { // Main function
    // Code
    return 0; // Returning 0 to the operating system
}
```

### 2.Printing Output to the console

- Without using namespace
```cpp 
#include<iostream>

int main() {

    std::cout << "Hello World!" << "\n"; // Using \n for new line
    std::cout << "Good Morning!" << std::endl; // Using endl for new line
    std::cout << "My name is Chitresh"; //Printing on new line

    return 0;m
}
```

- Using namespace
```cpp
#include<iostream>
using namespace std; // Using standard namespace

int main() {
    //Ommited std::
    cout << "Hello World!" << "\n"; //Ommited std::
    cout << "Good Morning!" << endl;
    cout << "My name is Chitresh";

    return 0;
}
```

### 3.Taking Input from the console

- Siingle Input
```cpp
#include<iostream>
using namespace std;

int main() {
    Single input and output
    int x; // Declaring Variable
    cin >> x; // Taking input and storing in variable x
    cout << "Value of x: " << x;
    return 0;
}
```

- Multiple Inputs
```cpp
#include<iostream>
using namespace std;

int main() {
    // Multiple input and output
    int x, y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y;
    return 0;
}
```
