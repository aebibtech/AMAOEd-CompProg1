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

int fib(int n) {
    int fs[n + 1];
    fs[0] = 0;
    fs[1] = 1;
    for(int c = 2; c <= n; c++) {
        fs[c] = fs[c - 1] + fs[c - 2];
    }
    return fs[n];
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
    int number;
    cout << "Element number of the Fibonacci Sequence: ";
    if( !(cin >> number) ) {
        cout << "Invalid input." << endl;
        exit(1);
    } else {
        cout << endl;
        cout << "Element " << number << " of the fibonacci sequence: ";
        cout << fib(number) << endl;
        cout << endl;
    }
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
