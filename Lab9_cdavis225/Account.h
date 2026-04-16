#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "Customer.h"
using namespace std;

class Account {
private:
    string accountNumber;
    Customer owner;

public:
    Account();
    Account(const string& accNum, double initialBalance, const Customer& customer);

    bool deposit(double amount);
    bool withdraw(double amount);

    virtual void closeOfBusiness();

    double getBalance() const;
    string getAccountNumber() const;
    Customer getCustomer() const;

    virtual void printAccountInfo() const;
    void printTransactions() const;

 protected:
     double balance;
     void printSummary(double previousBalance, double totalDeposits, double totalWithdrawals, double newBalance) const;
     vector<double> deposits;
     vector<double> withdrawals;
};

class SavingsAccount : public Account {
private:
    double dailyInterest;
public:
    SavingsAccount() {
        dailyInterest = 0.005;
    }
    void closeOfBusiness() override {
        cout << "Interest Rate: " << balance + (balance * dailyInterest);
    }
    void printAccountInfo() const override {
        dailyInterest;
    }
};

#endif
