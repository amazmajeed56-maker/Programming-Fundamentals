#include <iostream>
using namespace std;
int main() {
	//Question5: write a program that takes two numbers from the user and print their
//division result only if the denominator is not zero. Otherwise print "Division by
//zero is not possible."
    double numer, denom;
    cout << "Enter the numerator and denominator: ";
    cin >> numer >> denom;

    if (denom!= 0) {
        cout << "Result: " << (numer / denom) << endl;
    } else {
        cout << "Division by zero is not possible." << endl;
    }
}
