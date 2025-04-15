#include <iostream>
#include <string>

using namespace std;

void displayMenu(); // Function prototype


// Function to display the main menu options
void displayMenu() {
    cout << "a. Add" << endl;
    cout << "b. Subtract" << endl;
    cout << "c. Multiply" << endl;
    cout << "d. Divide" << endl;
    cout << "e. Quit" << endl;
    
}

void getUserInput(double &num1, double &num2) {
    cout << "Operand 1? ";
    cin >> num1;
    cout << "Operand 2? ";
    cin >> num2;
}

int main(){
    while (true) // Infinite loop to keep the program running until the user chooses to exit
    {
        /* code */
    displayMenu(); // Call the function to display the menu
    
    char choice = 'e';    
    cout << ">>";
    cin >> choice;
    double num1, num2; // Declare variables to store user input numbers

    switch(choice) {
        case 'a':
            getUserInput(num1, num2); // Get user input for numbers
            cout << "Result is:" << num1 + num2<< endl;
            break;
        case 'b':
            getUserInput(num1, num2);
            cout << "Result is:" << num1 - num2<< endl;
            break;
        case 'c':
            getUserInput(num1, num2);
            cout << "Result is:" << num1 * num2<< endl;
            break;
        case 'd':
            getUserInput(num1, num2);
            cout << "Result is:" << num1 / num2<< endl;
            break;
        case 'e':
            cout << "Bye Bye!" << endl;
            return 0;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
            break;
    }
    }
    
    

    
}