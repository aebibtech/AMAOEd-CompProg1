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
    int input[6];
    // input
    for(int i = 0; i < 6; i++) {
        cout << "Enter number [" << i + 1 << "]: ";
        if(!(cin >> input[i])) {
            exit(1);
        }
    }
    // print original order
    cout << "Original order: ";
    for(int c = 0; c < 6; c++) {
        cout << input[c] << " ";
    }
    cout << endl;
    // sort
    for(int c = 0; c < 6; c++) {
        for(int d = c; d < 6; d++) {
            if(input[c] > input[d]) {
                int temp = input[c];
                input[c] = input[d];
                input[d] = temp;
            }
        }
    }
    // print ascending order
    cout << "Sort by Ascending: ";
    for(int c = 0; c < 6; c++) {
        cout << input[c] << " ";
    }
    cout << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
