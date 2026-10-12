/*
CSC 134
M3T1
Nicholas Sheehan
10/11/2026
*/

#include <iostream>
using namespace std;

int main() {
    //Declare our variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    //ask for user input
    cout << " Please enter the width and the height of the first\n" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << " Please enter the width and the height of the second\n" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    //calculate answer
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    //display results
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;
}