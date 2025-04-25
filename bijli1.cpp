#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a choice : ";
    cout<<"1. You are a Hosteller \n";
    cout<<"2. You are a resident of punjab \n";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        int lread=0;
        int cread=0;
        int unit;
        int rs=14;
        int bill=0;
        cout<<"Enter the number of units consumed: ";
        cin>>cread;
        unit=cread-lread;
        bill=rs*unit;
        cout<<"The bill is: "<<bill;
        break;
    case 2:
        int lread1=0;
        int cread1=0;
        int unit1;
        int rs1=10;
        int bill1=0;
        cout<<"Enter the number of units consumed: ";
        cin>>cread;
        unit1=cread1-lread1;
        if (unit<=300)
        {
           cout<<"The bill is 0 for this month\n"; 
        }
        else
        {
             bill=rs1*unit1;
            cout<<"The bill is: "<<bill;
        }
        
        break;
    default:
        break;
    }
    return 0;
}