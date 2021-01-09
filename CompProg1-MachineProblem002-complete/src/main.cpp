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
    int seats[5][7], copySeats[5][7], number = 1, seatChoice;

    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 7; col++) {
            seats[row][col] = number++;
        }
    }

    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 7; col++) {
            copySeats[row][col] = seats[row][col];
        }
    }

    while(1) {
        for(int row = 0; row < 5; row++) {
            for(int col = 0; col < 7; col++) {
                cout << copySeats[row][col] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Enter seat number to reserve: ";
        while(!(cin >> seatChoice)) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << endl << "Invalid input." << endl << endl;
            cout << "Enter seat number to reserve: ";
        }
        if(seatChoice < 1 || seatChoice > 35) {
            cout << "Seat numbers are from 1 - 35 only."<< endl << endl;
        } else {
            for(int row = 0; row < 5; row++) {
                for(int col = 0; col < 7; col++) {
                    if(seats[row][col] == seatChoice) {
                        if(copySeats[row][col] == 0){
                            cout << endl;
                            cout << "Seat is taken." << endl << endl;
                        } else {
                            copySeats[row][col] = 0;
                            cout << endl;
                            cout << "Seat successfully reserved." << endl << endl;
                        }
                    }
                }
            }
        }
    }
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
