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
#include "student.h"

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

    Student s1("Paul Abib S. Camano", "Antipolo City", "Male", 27, // std::string name, std::string address, std::string gender, int age,
    "AMA Online Education", "BS Computer Science", 1); // std::string universityName, std::string academicProgram, short yearLevel

    cout << "Student Name\t: " << s1.getName() << endl;
    cout << "University Name\t: " << s1.getUniversityName() << endl;
    cout << "Academic Program: " << s1.getAcademicProgram() << endl;
    cout << "Year Level\t: " << s1.getYearLevel() << endl;
    cout << "Address\t\t: " << s1.getAddress() << endl;
    cout << "Age\t\t: " << s1.getAge() << endl;
    cout << "Gender\t\t: " << s1.getGender() << endl;
    cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
