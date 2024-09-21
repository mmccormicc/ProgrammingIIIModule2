#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    // Will loop 3 times
    for (int i = 0; i < 3; i++) {

        // Creating char array to hold first string inputted by user. This is size 40 instead of 20
        // to hold both strings when concatenated
        char string1[40];
        // Creating char array to hold second string inputted by user
        char string2[20];

        // Prompting user for first string
        cout << "Enter first string to concatenate: ";
        // Inputting string limited to 20 chars to prevent buffer overflow
        cin.getline(string1, 20);

        // Prompting user for second string
        cout << "Enter second string to concatenate: ";
        // Inputting string limited to 20 chars to prevent buffer overflow
        cin.getline(string2, 20);

        // Concatenating strings to destination string 1. String1 and String2 have a maximum size of
        // 20, so the string1 max size of 40 is enough to hold both. Strncat with max chars of 20 
        // is used for redundant protection.
        strncat(string1, string2, 20);

        // Printing out concatenated string
        cout << "Concatenated String: " << string1 << endl << endl;
    }

    return 0;
}