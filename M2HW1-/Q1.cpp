/* 
CSC 134
M2HW1 - Gold
Nicholas Sheehan
10/4/2026
*/

// Question 1
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variables
    string name;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNumber = 123456;

    // Desired output format for numbers
    cout << setprecision(2) << fixed << showpoint;

    // Getting account information
    cout << "Enter the name of the account: ";
    getline(cin, name);

    cout << "Enter the starting account balance: $";
    cin >> startingBalance;

    cout << "Enter the amount of deposit: $";
    cin >> deposit;

    cout << "Enter the amount of withdrawal: $";
    cin >> withdrawal;

    // Calculate the final account balance
    finalBalance = startingBalance + deposit - withdrawal;

    // Display the account information
    cout << "\nName on account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final account balance: $" << finalBalance << endl;

    return 0; 
}