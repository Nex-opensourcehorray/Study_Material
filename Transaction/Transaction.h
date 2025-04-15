#ifndef TRAMSACTION_H
#define TRAMSACTION_H

#include <iostream>
#include <string>

using namespace std;

class Transaction {
    private:
        string transaction_Date;
        int transaction_ID;
        double redundant_value;
        string Customer_name;
    public:
        Transaction(const string & Tdate, int TID, double Rvalue, const string & Cusname);
        string getTransactionDate() const;
        int getTransactionID() const;
        double getRedundantValue() const;
        string getCustomerName() const;

        void setCustomerName(const string & Cusname);

};

#endif // TRAMSACTION_H