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
#include <string>
#include <iomanip>
#include <locale>
#include "payslip.h"

using namespace std;

struct group_thousands : std::numpunct<char> {
    string do_grouping() const override {
        return "\3";
    }
};

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

    // Variables
    char employeeName[500];
    int basicSalary, overTimeHours;

    cout << "Employee Name\t: ";
    cin.getline(employeeName, 200, '\n');

    cout << "Basic Salary\t: ";
    //cin >> basicSalary;
    while( !(cin >> basicSalary) ) {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Basic Salary\t: ";
    }

    if(basicSalary < 10000) {
        cout << endl << "Minimum salary is Php 10,000.00." << endl;
        cout << "Basic Salary\t: ";
        while( !(cin >> basicSalary) ) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Basic Salary\t: ";
        }
    }

    cout << "Number of Overtime Hours : ";
    //cin >> overTimeHours;
    while( !(cin >> overTimeHours) ) {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Number of Overtime Hours : ";
    }

    if(overTimeHours < 1) {
        cout << endl << "Minimum overtime hours is 1." << endl;
        cout << "Number of Overtime Hours : ";
        while( !(cin >> overTimeHours) ) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Number of Overtime Hours : ";
        }
    }

    Payslip emp1; //(employeeName, basicSalary, overTimeHours); // Payslip(std::string name, double basicSalary, int overTimeHours)
    emp1.setName(employeeName);
    emp1.setBasicSalary(basicSalary);
    emp1.setOverTimeHours(overTimeHours);
    emp1.determinePayGradeAndTaxRate();
    emp1.computePay();
    cout << endl;
    cout.imbue( locale(cout.getloc(), new group_thousands) );
    cout.precision(2);
    cout << "Employee Name\t\t: " << emp1.getName() << endl;
    cout << "Basic Salary\t\t: Php " << fixed << emp1.getBasicSalary() << endl;
    cout << "Pay Grade\t\t: " << emp1.getPayGrade() << endl;
    cout << "No. of OT Hours\t\t: " << emp1.getOverTimeHours() << endl;
    cout << "OT Pay\t\t\t: Php " << emp1.getOverTimePay() << endl;
    cout << "Gross Pay\t\t: Php " << emp1.getGrossPay() << endl;
    cout << "Withholding Tax\t\t: Php " <<emp1.getWithHoldingTax() << endl;
    cout << "Net Pay\t\t\t: Php " << emp1.getNetPay() << endl;
    cout << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
