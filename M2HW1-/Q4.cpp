/* 
CSC 134
M2HW1 - Gold
Nicholas Sheehan
10/4/2026
*/

// Question 4
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables
    string letsGo, school, team, cheerOne, cheerTwo;

    // Assign values to the variables
    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    // Build the cheers using string concatenation
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Display the cheers
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}