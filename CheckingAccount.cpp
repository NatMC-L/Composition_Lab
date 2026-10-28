#include "CheckingAccount.h" 

CheckingAccount::CheckingAccount(string accNum, string holderName, double bal, double fee): BankAccount(accNum, holderName, bal) {
    transactionFee = fee;
}

bool CheckingAccount::withdraw(double amount) {
    double totalAmount = amount + transactionFee;

    if (totalAmount >= balance) {
        balance -= totalAmount;
        // add the transaction 
        transactionHistory.push_back(Transaction("Checking Withdrawal",totalAmount,"Recorded"));
        return true;
    }

    return false;
}

void CheckingAccount::displayAccountInfo() const {
    cout << "\n--- Checking Account Information ---\n";
    printAccount(*this);
    cout << " Transaction Fee: $" << transactionFee << endl;
}