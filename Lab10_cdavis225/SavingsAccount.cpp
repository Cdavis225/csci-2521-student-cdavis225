#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : interest(1)
{
}

SavingsAccount::SavingsAccount(const string& accNum, double initialBalance, float interest, const Customer& customer)
    : Account(accNum, initialBalance, customer)
{    
    this->interest = interest;
}

void SavingsAccount::closeOfBusiness()
{
    double totalDeposits = accumulate(deposits.begin(), deposits.end(), 0.0);
    double totalWithdrawals = accumulate(withdrawals.begin(), withdrawals.end(), 0.0);

    double previousBalance = balance;
    double interestToApply = previousBalance <= 0 ? 0 : interest;
    double newBalance = (previousBalance + totalDeposits - totalWithdrawals) * (1 + interestToApply);

    printSummary(previousBalance, totalDeposits, totalWithdrawals, newBalance);

    balance = newBalance;

    deposits.clear();
    withdrawals.clear();
}

void SavingsAccount::printAccountInfo() const
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: $" << balance << endl;
    cout << "Interest Rate: " << interest * 100 << "%" << endl;
    owner.printCustomerInfo();
}

void SavingsAccount::Save() const {
    //creating the .txt file
    ofstream summary("account_summary.txt");
    //filling the .txt file with text
    summary << "Account Number: 5423678409" << endl << "Current Balance : $1050.25" << endl << "Daily Interest Rate : 0.02";
    //closing the .txt file
    summary.close();
}