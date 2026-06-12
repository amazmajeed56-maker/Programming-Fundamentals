
#include<iostream> 
#include<string> 
using namespace std; 
 
//Globe var 
double charges = 0.0; 
char usertype; 
double rent = 250.0; 
double tv = 35.0; 
 
double unitSlab[9] = {12.21, 14.53, 31.51, 38.41, 41.62, 43.04, 44.18, 45.89, 49.10}; 
 
int metersInstalled = 0;  
 
// ========================================== 
 
void userData(string &Name, int &id, char &type); 
void userMenu(); 
double unitRate(double units); 
double calGst(double subtotal); 
double calcInctax(double totalAGst); 
double calcDuty(); 
double fixedCharges(double units); 
void applyNewConnection(); 
void displayFinalBill(string Name, int id, double units); 
 
// ========================================== 
 
int main() { 
    string Name; 
    int id; 
    double units; 
    int choice = 0; 
     
    userData(Name, id, usertype); 
     
    do { 
        userMenu(); 
        cin >> choice; 
         
        if (choice == 1) { 
            cout << "Enter your units Consumed: "; 
            cin >> units; 
            displayFinalBill(Name, id, units); 
        } 
        else if (choice == 2) { 
            applyNewConnection(); 
        } 
        else if (choice == 3) { 
            cout << "\n--- Customer Details ---" << endl; 
            cout << "Name: " << Name << endl; 
            cout << "ID: " << id << endl; 
            cout << "Type: " << ((usertype == 'H') ? "Household" : "Commercial") << endl; 
            cout << "Meters Installed: " << metersInstalled << endl; 
        } 
        else if (choice == 4) { 
            cout << "Exiting Program. Goodbye!" << endl; 
        } 
        else { 
            cout << "Invalid Choice! Please try again." << endl; 
        } 
    } while (choice != 4); 
     
    return 0; 
} 
 
// ========================================== 
 
void userData(string &Name, int &id, char &type) { 
    cout << "\n--- Customer Registration ---" << endl; 
    cout << "Enter Your Name: "; 
    cin.ignore();  
    getline(cin, Name); 
     
    cout << "Enter ur UserId: "; 
    cin >> id; 
     
    cout << "Enter Customer Type(H/C): "; 
    cin >> type; 
     
    cout << "Enter no of meters installed (0, 1,or 2): "; 
    cin >> metersInstalled; 
} 
 
void userMenu() { 
    cout << endl; 
    cout << "\t =============== LESCO MAIN MENU ==================" << endl; 
    cout << "\t ==== 1. Calculate Monthly Electricity Bill     =====" << endl; 
    cout << "\t ==== 2. Apply for New Electricity Connection =====" << endl; 
    cout << "\t ==== 3. View Customer Details                =====" << endl; 
    cout << "\t ==== 4. Exit Program                         =====" << endl; 
    cout << "\t ==================================================" << endl; 
 
    cout << "Enter your choice: "; 
} 
 
double unitRate(double units) { 
    if(units <= 100)  
        charges = units * unitSlab[0]; 
    else if(units > 100 && units <= 200) 
        charges = units * unitSlab[1]; 
    else if(units > 200 && units <= 300) 
        charges = units * unitSlab[2]; 
    else if(units > 300 && units <= 400)  
        charges = units * unitSlab[3]; 
    else if(units > 400 && units <= 500)  
        charges = units * unitSlab[4]; 
    else if(units > 500 && units <= 600) 
        charges = units * unitSlab[5]; 
    else if(units > 600 && units <= 700) 
        charges = units * unitSlab[6]; 
    else if(units > 700 && units <= 901)  
        charges = units * unitSlab[7];  
    else charges = units * unitSlab[8]; 
     
    return charges; 
} 
 
double calGst(double subtotal) { 
    return subtotal * 0.18; 
} 
 
double calcInctax(double totalAGst) { 
    if(usertype == 'H') { 
        return totalAGst * 0.10; 
    } else { 
        return totalAGst * 0.15; 
    } 
} 
 
double calcDuty() { 
    return charges * 0.015;  
} 
 
double fixedCharges(double units) { 
    double fixed = 0.0; 
    if(units <= 300) fixed = 0.0; 
    else if(units > 300 && units <= 400)  
        fixed = 200.0; 
    else if(units > 400 && units <= 500)  
        fixed = 400.0; 
    else if(units > 500 && units <= 600)  
        fixed = 600.0; 
    else if(units > 600 && units <= 700)  
        fixed = 800.0; 
    else if(units > 700)  
        fixed = 1000.0; 
     
    return fixed; 
} 
 
void applyNewConnection() { 
    cout << "\n--- New Connection Application ---" << endl; 
    double newConnectionCost = 250000.0; 
    double additionalCharges = 0.0; 
     
    if (usertype == 'H') { 
        if (metersInstalled == 0)  
            additionalCharges = 2500.0; 
        else if (metersInstalled == 1)  
            additionalCharges = 5000.0; 
        else { 
            cout << "House meter lim reached." << endl; 
        } 
    } else if (usertype == 'C') { 
        if (metersInstalled == 0) additionalCharges = 35000.0; 
        else if (metersInstalled == 1) additionalCharges = 70000.0; 
        else { 
            cout << "Commercial meter limit reached." << endl; 
        } 
    } 
     
    cout << "New Proper Connection Cost: Rs. " << newConnectionCost << endl; 
    cout << "Additional Meter Charges: Rs. " << additionalCharges << endl; 
    cout << "Total Payable for New Connection: Rs. " << (newConnectionCost + additionalCharges) << endl; 
} 
 
void displayFinalBill(string Name, int id, double units) { 
    charges = unitRate(units); 
    double duty = calcDuty(); 
    double fixed = fixedCharges(units); 
     
    double subtotal = charges + duty + fixed + rent + tv; 
    double gst = calGst(subtotal); 
    double inctax = calcInctax(subtotal + gst); 
     
    double totalBill = subtotal + gst + inctax; 
 
    cout << "\n========== LESCO ELECTRICITY BILL ==========" << endl; 
    cout << "Customer Name: " << Name << endl; 
    cout << "Customer ID: " << id << endl; 
    cout << "Customer Type: " << ((usertype == 'H') ? "Household" : "Commercial") << endl; 
    cout << "Units Consumed: " << units << endl; 
    cout << "Electricity Consumption Charges: Rs. " << charges << endl; 
    cout << "Electricity Duty: Rs. " << duty << endl; 
    cout << "Fixed Charges: Rs. " << fixed << endl; 
    cout << "Meter Rent: Rs. " << rent << endl; 
    cout << "TV Fee: Rs. " << tv << endl; 
    cout << "GST: Rs. " << gst << endl; 
    cout << "Income Tax: Rs. " << inctax << endl; 
    cout << "Total Payable Bill: Rs. " << totalBill << endl; 
    cout << "============================================" << endl; 
}
