#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

struct Transaction {
    string type;
    double amount;
    string timestamp;

    Transaction(string t, double a, string time) : type(t), amount(a), timestamp(time) {}
};

#endif // TRANSACTION_H