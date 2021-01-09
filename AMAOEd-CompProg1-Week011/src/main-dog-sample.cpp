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
#include "dog.h"

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

    Dog kailee("Siberian Husky", 15, true); // breed, size, isRegistered
    kailee.setKindOfFur("Triple-coat");

    cout << "Dog Name: Kailee" << endl;
    cout << "Breed: " << kailee.getBreed() << endl;
    cout << "Size: " << kailee.getSize() << endl;
    cout << "Registration Status: " << (kailee.getIsRegistered() == 1 ? "Registered" : "Not Registered") << endl;
    cout << "Number of Legs: " << kailee.getNumberOfLegs() << endl;
    cout << "Kind of Fur: " << kailee.getKindOfFur() << endl;
    cout << "With Tail? " << (kailee.getWithTail() == 1 ? "Yes" : "No") << endl;
    cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
