#include <iostream>
using namespace std;
int main() {
	//Question 3: Write a program that asks the user to enter two numbers. The
//program should display which number is the smaller and which is the larger
    double num1, num2;
    cout << "Enter two num: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " is the larger and " << num2 << " is the smaller." << endl;
    } else if (num2 > num1) {
        cout << num2 << " is the larger and " << num1 << " is the smaller." << endl;
    } else {
        cout << "Both nums are equal." << endl;
    }
    return 0;

}
