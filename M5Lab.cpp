#include <iostream>
#include <iomanip>
using namespace std;

/* M5LAB1
 Nicholas Sheehan
 11/9/26
 */

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.

    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();

    // Get the rectangle's area.
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}

// Get the rectangle's length.
double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// Get the rectangle's width.
double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// Calculate and return the area.
double getArea(double length, double width)
{
    double area = length * width;
    return area;
}

// Display the rectangle's information.
void displayData(double length, double width, double area)
{
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Rectangle Information" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}