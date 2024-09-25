//
//  main.cpp
//  BinConverter
//
//  Created by Isaac Adeleke on 9/24/24.
//

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

