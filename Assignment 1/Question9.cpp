#include <iostream>
using namespace std;
int main() {
//	Question 9. Write a code to display ASSCI values of alphabets using explicit type
//casting.

    cout << "Uppercase letters:\n";
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << ": " << (int)c << "  ";
    }
    
    cout << endl<<"Lowercase letters:"<<endl;
    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << ": " << (int)c << "  ";
    }
    cout << endl;
    return 0;

}
