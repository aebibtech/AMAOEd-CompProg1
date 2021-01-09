/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: Write a program that will display
 * the value and logical address of an uninitialized character array
 * with size ten (10) and a pointer pointing to the array.
 * (Hint: you may need to perform some casting.)
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

    char arr[10];
    int *pArr = (int *) &arr;

    cout << endl;
    cout << "The value of char arr[10]\t\t: " << arr << endl;
    cout << "The logical address of char arr[10]\t: " << &arr << endl;
    cout << "The logical address of *pArr\t\t: " << pArr << endl;
    cout << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
