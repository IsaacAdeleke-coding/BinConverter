# BinConverter

This is a simple C++ program that converts a positive integer to its binary representation. The user is prompted to input a positive integer, and the program outputs the corresponding binary number.

## Project Structure

The project consists of a single file:

- **main.cpp**: This file contains the main logic for converting a positive integer to binary and printing the result.

## Program Overview

The program performs the following steps:

1. It prompts the user to enter a positive integer.
2. If the input is `0`, the program directly outputs `0` as the binary representation.
3. For any other positive integer, the program converts the number to binary by continuously dividing the number by 2 and storing the remainders (either `0` or `1`).
4. The binary digits are then printed in the correct order.

### Code

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int number;
    
    // Prompt user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the input is valid
    if (number == 0) {
        cout << "0 in binary is 0" << endl;
        return 0;
    }

    // Store the binary representation
    string binary = "";

    // Convert the number to binary
    while (number > 0) {
        // Append the remainder (0 or 1) to the binary string
        binary = (number % 2 == 0 ? "0" : "1") + binary;
        number = number / 2;
    }

    // Print the binary representation
    cout << "Binary representation: " << binary << endl;

    return 0;
}

Output

For a given input, the program will output the binary representation of that number. Example:

Enter a positive integer: 10
Binary representation: 1010


How to Compile and Run

To compile the program, use the following command:

g++ main.cpp -o BinConverter
To run the compiled program, use:
./BinConverter
Features

Accepts a positive integer as input.
Converts the integer to its binary equivalent.
Displays the binary representation in the console.
