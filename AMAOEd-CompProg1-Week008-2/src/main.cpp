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
	int height, count, letter;
    char letters[10] {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    cout << "Enter height of the triangle: ";
    while(!(cin >> height)) {
        cout << "Invalid input." << endl;
	    cout << "Enter height of the triangle: ";
	    cin.clear();
        cin.ignore(1000, '\n');
    }

    switch(height){
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
            break;
        default:
            cout<< "Minimum height is 1. Maximum height is 10." << endl;
            exit(1);
    }

	for(count = 1; count <= height; count++){
		for(int space = height - count; space > 0; space--){
			cout << " ";
		}
		for(letter = 0; letter < count; letter++){
			cout << letters[count-1] << " "; // index count-1 since array indices start at 0
		}
		cout << endl;
	}

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
