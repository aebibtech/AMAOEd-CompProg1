/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: Write a program that will display the value
 * and logical address of an uninitialized float array
 * with size twenty (20) and a reference pointing to the array.
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
    float floatArray[20];
    int &rFloatArray = (int &) floatArray;

    cout << endl;
    cout << "The value of floatArray[20]\t\t: " << floatArray << endl;
    cout << "The logical address of floatArray[20]\t: " << &floatArray << endl;
    cout << "The value of &rFloatArray\t\t: " << rFloatArray << endl;
    cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
