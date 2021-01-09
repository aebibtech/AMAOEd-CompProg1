/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int divide(int a, int b) {
    return a / b;
}

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    int numbers[6];
    // User Input
    for(int n = 0; n < 6; n++) {
        cout << "Enter number [" << n + 1 << "]: ";
        if( !(cin >> numbers[n]) ) {
            cout << endl << "Invalid input." << endl << endl;
            exit(1);
        }
    }
    // Output division
    cout << endl;
    for(int n = 0; n < 6; n+=2) {
        if(numbers[n + 1] != 0) { // proceed with division if divisor is not zero
            cout << numbers[n] << " ÷ " << numbers[n + 1] << " = ";
            cout << divide(numbers[n], numbers[n + 1]);
        } else {
            cout << numbers[n] << " ÷ " << numbers[n + 1] << " = ";
            cout << "Undefined";
        }
        cout << ", ";
    }
    cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
