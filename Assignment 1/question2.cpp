#include <iostream>
using namespace std;
int main() {
	//	Question 2. Write an if statement that prints the message ";The number is valid"; if
//the variable temperature is within the range -50 through 150.

	double temperature;
	cout<<"Enter value of temp";
	cin>>temperature;
	if (temperature >= -50 && temperature <= 150) {
    cout << "The number is valid" << endl;
}
}
