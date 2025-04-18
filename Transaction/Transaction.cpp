#include <Transaction.h>

Transaction::Transaction(const string & Tdate, int TID, double Rvalue, const string & Cusname) {
    // Constructor implementation
    transaction_Date = Tdate;
    transaction_ID = TID;
    redundant_value = Rvalue;
    Customer_name = Cusname;
}

string Transaction::getTransactionDate() const {
    return transaction_Date;
}

int Transaction::getTransactionID() const {
    return transaction_ID;
}

double Transaction::getRedundantValue() const {
    if (redundant_value >= 500) {
        return redundant_value * 0.9; // Return After Tax income if redundant_value is greater than or equal to 500
    }

        return redundant_value; // Return Redundant value if less than 500
}

string Transaction::getCustomerName() const {
    return Customer_name;
}

void Transaction::setCustomerName(const string & Cusname) {
    Customer_name = Cusname; // Set the customer name
}
// End of Transaction.cpp