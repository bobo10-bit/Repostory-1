#include <string>
using namespace std;

class Banking {
public:
    // Default constructor for when the user doesn't enter a value.
    Banking();

    // Setters for each variable
    void setInitialInvestmentAmount(double amount);
    void setMonthlyDepositAmount(double amount);
    void setAnnualInterest(int interest);
    void setNumberOfYears(int years);

    // Function to display the table without monthly deposit
    void TableWithNoMonthlyDeposit();

    // Function to display the table with monthly deposit
    void TableWithMonthlyDeposit();

private:
    // Private member variables
    int numberOfYears;
    double initialInvestmentAmount;
    double monthlyDepositAmount;
    int annualInterest;
    double yearEndBalance;
    double yearEndInterest;
};