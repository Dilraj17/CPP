#include <iostream>
using namespace std;

int main() {
    do{
    cout << "Enter a choice:\n";
    cout << "1. You are a Hosteller\n";
    cout << "2. You are a Resident of Punjab\n";
    

    
    int choice;
    cin >> choice;

    int cread, lread = 0, unit, bill = 0;

    switch (choice) {
        case 1: {
            int rs = 14;
            cout << "Enter the current meter reading: ";
            cin >> cread;
            unit = cread - lread;
            bill = rs * unit;
            cout << "The bill is: " << bill << endl;
            break;
        }
        case 2: {
            int rs = 10;
            cout << "Enter the current meter reading: ";
            cin >> cread;
            unit = cread - lread;
            
            if (unit <= 300) {
                cout << "The bill is 0 for this month\n";
            } else {
                bill = rs * unit ;  
                cout << "The bill is: " << bill << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice! Please enter 1 or 2.\n";
    }}while(choice!=1 && choice!=2);

    return 0;
}
