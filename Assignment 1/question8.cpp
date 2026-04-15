#include <iostream>
using namespace std;
int main() {
	
	Question 8: Write a program that displays the following menu: Geometry
Calculator

	int choice;
    cout << "Geometry Calculator"<<endl;
    cout << "1. Calculate the Area of a Circle"<<endl;
    cout << "2. Calculate the Area of a Rectangle"<<endl;
    cout << "3. Calculate the Area of a Triangle"<<endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        double r;
        cout << "Enter the radius of the circle: ";
        cin >> r;
        cout << "Area: " << 3.14159 * r * r << endl;
    } else if (choice == 2) {
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area: " << length * width << endl;
    } else if (choice == 3) {
        double base, height;
        cout << "Enter the length of the base and the height: ";
        cin >> base >> height;
        cout << "Area: " << base * height * 0.5 << endl;
    } else {
        cout << "Invalid choice." << endl;
    }
    return 0;

}
