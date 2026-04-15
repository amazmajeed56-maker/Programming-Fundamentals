#include <iostream>
using namespace std;
int main() {
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
}
