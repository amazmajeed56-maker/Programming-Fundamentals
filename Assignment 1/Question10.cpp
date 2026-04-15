#include <iostream>
using namespace std;
int main() {
	    double mass, weight;
    cout << "Enter the mass of the object: ";
    cin >> mass;
    weight = mass * 9.8;
    cout << "The weight is " << weight << " newtons." << endl;
    if (weight > 1000) {
        cout << "The object is too heavy." << endl;
    } else if (weight < 10) {
        cout << "The object is too light." << endl;
    }
    return 0;

}
