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
    int seats[5][7], seatsCopy[5][7], number = 1, seatChoice; // variables
    // original values for comparison later
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 7; col++) {
            seats[row][col] = number++;
        }
    }
    // copy to modify with zeroes
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 7; col++) {
            seatsCopy[row][col] = seats[row][col];
        }
    }
    // unending loop
    while(1) {
        // Display Modified seats
        for(int row = 0; row < 5; row++) {
            for(int col = 0; col < 7; col++) {
                cout << seatsCopy[row][col] << "\t";
            }
            cout << endl;
        }
        // User Input
        cout << endl;
        cout << "Enter seat number to reserve: ";
        while(!(cin >> seatChoice)) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << endl << "Invalid input." << endl << endl;
            cout << "Enter seat number to reserve: ";
        }
        // Make sure seat choice is from 1-35 only
        if(seatChoice < 1 || seatChoice > 35) {
            cout << "Seat numbers are from 1-35 only." << endl << endl;
        } else {
            for(int row = 0; row < 5; row++) {
                for(int col = 0; col < 7; col++) {
                    if(seats[row][col] == seatChoice) { // find the chosen seat number from the original
                        if(seatsCopy[row][col] == 0) { // if not zero, modify the copy with zero
                            cout << "Seat is taken." << endl << endl;
                        } else {
                            seatsCopy[row][col] = 0;
                            cout << "Seat successfully reserved." << endl << endl;
                        }
                    }
                 }
            }
        }
    }
    system("pause");
    return EXIT_SUCCESS;
}
