#include <iostream>
using namespace std;
int main() {
//	Question 7: Write a program that asks for the time (in minutes) of three runs
//it took each of them to finish a race. The program should display who came in
//first, second, and third place.

    string run1, run2, run3;
    double time1, time2, time3;

    cout << "Enter name and time (in minutes) for run 1: ";
    cin >> run1 >> time1;
    cout << "Enter name and time (in minutes) for run 2: ";
    cin >> run2 >> time2;
    cout << "Enter name and time (in minutes) for run 3: ";
    cin >> run3 >> time3;

    if (time1 <= time2 && time1 <= time3) {
        cout << "1st Place: " << run1 << endl;
        if (time2 <= time3) {
            cout << "2nd Place: " << run2 << "\n3rd Place: " << run3 << endl;
        } else {
            cout << "2nd Place: " << run3 << "\n3rd Place: " << run2 << endl;
        }
    } else if (time2 <= time1 && time2 <= time3) {
        cout << "1st Place: " << run2 << endl;
        if (time1 <= time3) {
            cout << "2nd Place: " << run1 << "\n3rd Place: " << run3 << endl;
        } else {
            cout << "2nd Place: " << run3 << "\n3rd Place: " << run1 << endl;
        }
    } else {
        cout << "1st Place: " << run3 << endl;
        if (time1 <= time2) {
            cout << "2nd Place: " << run1 << endl<<"3rd Place: " << run2 << endl;
        } else {
            cout << "2nd Place: " << run2 << endl<<"3rd Place: " << run1 << endl;
        }
    }
    return 0;

}
