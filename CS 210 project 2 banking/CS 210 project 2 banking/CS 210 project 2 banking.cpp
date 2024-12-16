
#include <string>
#include <iostream>
#include <any>
#include "Banking.h"
using namespace std;

double initialInvestmentAmount;
double monthlyDepositAmount;
int annualInterest;
int numberOfYears;
double yearEndBalance;
double yearEndInterest;

// Gives the user the instructions and sets the variables
void userIntroduction() {
    cout << "Please enter the information below to see how your investment will grow!" << endl << endl;
    cout << string(40, '*') << endl;
    cout << string(14, '*') << " Data Input " << string(14, '*') << endl;

    // Checks the user input to see if it's a number and if not it outputs a error.
    while (true) {
        cout << "Initial investment amount (In dollars): ";
        cin >> initialInvestmentAmount;
        if (cin.fail() || initialInvestmentAmount < 0) {
            cout << "Error: please enter a valid number." << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }

    // Checks the user input to see if it's a number and if not it outputs a error.
    while (true) {
        cout << "Monthly deposit amount (In dollars): ";
        cin >> monthlyDepositAmount;
        if (cin.fail() || monthlyDepositAmount < 0) {
            cout << "Error: please enter a valid number." << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }

    // Checks the user input to see if it's a number and if not it outputs a error.
    while (true) {
        cout << "Annual interest (In percent): ";
        cin >> annualInterest;
        if (cin.fail() || annualInterest < 0) {
            cout << "Error: please enter a valid number." << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }

    // Checks the user input to see if it's a number and if not it outputs a error.
    while (true) {
        cout << "Number of years (In years):  ";
        cin >> numberOfYears;
        if (cin.fail() || numberOfYears < 0) {
            cout << "Error: please enter a valid number." << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }
}

int main() {
    Banking table1;
    Banking table2;

    userIntroduction();
    // Makes the user press any key to continue
    // For linux
    #if defined(__linux__) // Or #if __linux__
    system("read");

    // For windows
    #elif _WIN32
    system("pause");

    // For mac
    #else
    system("read");
    
    #endif

    table1.setInitialInvestmentAmount(initialInvestmentAmount);  
    table1.setAnnualInterest(annualInterest);           
    table1.setNumberOfYears(numberOfYears);
    table1.TableWithNoMonthlyDeposit();

    table2.setInitialInvestmentAmount(initialInvestmentAmount);
    table2.setAnnualInterest(annualInterest);
    table2.setNumberOfYears(numberOfYears);
    table2.setMonthlyDepositAmount(monthlyDepositAmount);
    table2.TableWithMonthlyDeposit();

    return 0;
}

