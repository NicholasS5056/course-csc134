/* 
CSC 134
M2HW1 - Gold
Nicholas Sheehan
10/4/2026
*/

// Question 3
#include <iostream>

using namespace std;

int main() {
    // Variables
    int pizzas, slicesPerPizza, visitors, leftover;

    // Get information from the user
    cout << "Enter the number of pizzas: ";
    cin >> pizzas;

    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;

    cout << "Enter the number of visitors: ";
    cin >> visitors;

    // Calculate the number of slices left over
    leftover = (pizzas * slicesPerPizza) - (visitors * 3);

    // Display the result
    cout << "The number of slices left over is: " << leftover << endl;

    return 0;
}