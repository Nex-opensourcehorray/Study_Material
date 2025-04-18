#include <iostream>
#include <string>
#include <Transaction.h>

int main(){
    // Create a Transaction object
    Transaction transaction("2023-10-01", 12345, 600.0, "John Doe");

    // Test the getters
    std::cout << "Transaction Date: " << transaction.getTransactionDate() << std::endl;
    std::cout << "Transaction ID: " << transaction.getTransactionID() << std::endl;
    std::cout << "Redundant Value: " << transaction.getRedundantValue() << std::endl;
    std::cout << "Customer Name: " << transaction.getCustomerName() << std::endl;

    // Test the setter
    transaction.setCustomerName("Jane Smith");
    std::cout << "Updated Customer Name: " << transaction.getCustomerName() << std::endl;

    return 0;
}