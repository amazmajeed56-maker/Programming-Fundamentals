#include <iostream>
using namespace std;
int main() {
	
//	Question 1: Write an if/else statement that assigns 0 to x when y is equal to 10.
//Otherwise, it should assign 1 to x.

	int x,y;
	cout<<"Enter value of y";
	cin>>y;
	if (y == 10) {
    x = 0;
} else {
    x = 1;
}
	cout<<"value of x is"<<x;
	  cout<< endl;

//	Question 2. Write an if statement that prints the message ";The number is valid"; if
//the variable temperature is within the range -50 through 150.

	double temperature;
	cout<<"Enter value of temp";
	cin>>temperature;
	if (temperature >= -50 && temperature <= 150) {
    cout << "The number is valid" << endl;
}
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
//Question 4. Create to variables a and b assigning the same value (eg.10). add 0.2
//to a and print which one is larger and which is smaller. Use appropriate data
//types.
double a = 10.0;
    double b = 10.0;
    
    a += 0.2;
    
    if (a > b) {
        cout << "a (" << a << ") is larger and b (" << b << ") is smaller." << endl;
    } else if (b > a) {
        cout << "b (" << b << ") is larger and a (" << a << ") is smaller." << endl;
    } else {
        cout << "a and b are equal." << endl;
    }
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




