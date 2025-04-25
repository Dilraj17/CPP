#include <iostream>

using namespace std;

int main(){int choice; float unitsConsumed = 0, lastReading = 0, currentReading;
    cout << "**********Welcome to electricity bill calculator**********\n"
        << endl;

    cout << "You reside in\n" << "1. Hostel\n"
        << "2. Outside Hostel" << endl;

    cin >> choice;

    if (choice == 1){int unitHostel = 14; 
        cout << "Your last reading: " << lastReading << endl;

        cout << "Enter the current reading:\n";
        cin >> currentReading;
        
        unitsConsumed = currentReading - lastReading;

        cout << "The no of units consumed is: " << unitsConsumed << endl;

        double bill = unitHostel * unitsConsumed;

        cout << "Your bill is: " << bill << endl;
    }
    else if (choice == 2) {int unitCivil = 10;
        
        cout << "Your last reading: " << lastReading << endl;

        cout << "Enter the current reading:\n";
        cin >> currentReading;
        
        unitsConsumed = currentReading - lastReading;

        if (unitsConsumed > 600){

        cout << "The no of units consumed is: " << unitsConsumed << endl;

        double bill = unitCivil * unitsConsumed;

        cout << "Your bill is: " << bill << endl;
        }
        else{
            cout << "Your bill is: 0" << endl;
        }
        
    }
    else{
        cout << "Please enter a valid choice" << endl;
    }
    
}