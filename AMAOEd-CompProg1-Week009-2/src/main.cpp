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

void printDigits(unsigned short n) {
    if(n == 0) {
        return;
    }
    int digit = n % 10;
    printDigits(n / 10);
    cout << digit << " ";
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
    unsigned short number;
    cout << "Enter a number from 10-99: ";
    if( !(cin >> number)) {
        cout << "Invalid input." << endl;
        exit(1);
    } else {
            if(number >= 10 && number <= 99){
                cout << "Digits of " << number << " are: ";
                printDigits(number);
            } else {
                cout << "Enter a number from 10-99 only. ";
            }
    }
    cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
