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
#include <iomanip>
#include <locale>
#include "payslip.h"

using namespace std;

struct thousands : std::numpunct<char> {
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
    char employeeName[200];
    double basicSalary;
    int overTimeHours;

    cout << "Employee Name\t: ";
    cin.getline(employeeName,sizeof(employeeName));

    cout << "Basic Salary\t: ";
    while( !(cin >> basicSalary) ) {
        cout << endl << "Invalid input." << endl << endl;
        cout << "Basic Salary\t: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }

    if(basicSalary < 10000) {
        cout << endl << "Basic salary should not be less than Php 10,000.00. " << endl << endl;
        exit(1);
    }

    cout << "No. of OT hours\t: ";
    while( !(cin >> overTimeHours) ) {
        cout << endl << "Invalid input." << endl << endl;
        cout << "No. of OT hours\t: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }

    if(overTimeHours < 1) {
        cout << endl << "Minimum overtime is 1 hour." << endl << endl;
        exit(1);
    }

    Payslip emp(employeeName, basicSalary, overTimeHours); // Payslip(std::string name, double basicSalary, int overTimeHours)
    emp.determinePayGradeAndTaxRate();
    emp.computePay();
    string cur = "Php";
    cout << endl;
    cout.imbue( locale(cout.getloc(), new thousands) );
    cout.precision(2);
    cout << "Employee Name\t: " << emp.getName() << endl;
    cout << "Basic Salary\t: " << cur << " " << fixed <<emp.getBasicSalary() << endl;
    cout << "Pay Grade\t: " << emp.getPayGrade() << endl;
    cout << "No. of OT Hours\t: " << emp.getOverTimeHours() << endl;
    cout << "OT Pay\t\t: " << cur << " " << fixed << emp.getOverTimePay() << endl;
    cout << "Gross Pay\t: " << cur << " " << fixed << emp.getGrossPay() << endl;
    cout << "Withholding Tax\t: " << cur << " " << fixed << emp.getWithHoldingTax() << endl;
    cout << "Net Pay\t\t: " << cur << " " << fixed << emp.getNetPay() << endl;
    cout << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    system("pause");
    return EXIT_SUCCESS;
}
