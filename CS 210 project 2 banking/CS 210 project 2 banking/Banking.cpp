#include <iostream>
#include <iomanip>
#include "Banking.h"
using namespace std;

// Constructor initializes member variables to 0
Banking::Banking() {
    numberOfYears = 0;
    initialInvestmentAmount = 0;
    monthlyDepositAmount = 0;
    annualInterest = 0;
    yearEndBalance = 0;
    yearEndInterest = 0;
}

// Setter functions
void Banking::setInitialInvestmentAmount(double amount) {
    initialInvestmentAmount = amount;
}

void Banking::setMonthlyDepositAmount(double amount) {
    monthlyDepositAmount = amount;
}

void Banking::setAnnualInterest(int interest) {
    annualInterest = interest;
}

void Banking::setNumberOfYears(int years) {
    numberOfYears = years;
}

// Creates table with no monthly deposits
void Banking::TableWithNoMonthlyDeposit() {
    cout << endl;
    cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
    cout << string(60, '-') << endl;
    cout << "Year     Year End Balance     Year End Earned Interest" << endl;
    cout << string(60, '-') << endl;

    yearEndBalance = initialInvestmentAmount;

    // Loops depending on the number of years the user inputs
    for (int i = 1; i <= numberOfYears; i++) {
        // Calculates the yearEndInterest and yearEndBalance
        yearEndInterest = yearEndBalance * (annualInterest / 100.0); // Floating-point division
        yearEndBalance += yearEndInterest;

        // Prints the interest and balance per year
        cout.width(4);
        cout << i;
        cout.width(11);
        cout << '$' << fixed << setprecision(2) << yearEndBalance;
        cout.width(28 - to_string(yearEndBalance).length());
        cout << '$' << fixed << setprecision(2) << yearEndInterest << endl;
    }
    cout << endl;
}

void Banking::TableWithMonthlyDeposit() {
    // Makes and sets new variables to be able to calculate the interest every month
    double monthlyInterest = annualInterest / 12.0 / 100.0; 
    yearEndBalance = initialInvestmentAmount; 
    double monthlyAmount = 0;
    double yearStartBalance;

    cout << "Balance and Interest with Additional Monthly Deposits" << endl;
    cout << string(60, '-') << endl;
    cout << "Year     Year End Balance     Year End Earned Interest" << endl;
    cout << string(60, '-') << endl;

    // Loops as many times the user inputted as the nuumber of yaers.
    for (int i = 1; i <= numberOfYears; i++) {
        yearStartBalance = yearEndBalance; 
        for (int month = 1; month <= 12; month++) {
            // Loops per month to add interest per month.
            yearEndBalance += monthlyDepositAmount; 
            monthlyAmount = yearEndBalance * monthlyInterest; 
            yearEndBalance += monthlyAmount; 
        }

        // Calculate earned interest in the year
        yearEndInterest = yearEndBalance - yearStartBalance - (monthlyDepositAmount * 12);

        // Prints the balance and interest for the year.
        cout.width(4);
        cout << i;
        cout.width(11);
        cout << '$' << fixed << setprecision(2) << yearEndBalance;
        cout.width(28 - to_string(yearEndBalance).length());
        cout << '$' << fixed << setprecision(2) << yearEndInterest << endl;
    }
}