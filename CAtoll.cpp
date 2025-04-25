#include <iostream>
using namespace std;

class time{
    int hour;
    public:
        void car()
        {
            int h;
            hour = h;
            cout<<"Enter the number of hours: ";
            cin>>hour;
            if (hour<3){
                cout<<"The parking charge for car is: $"<<hour*50<<endl;
            }
            else{
                cout<<"The parking charge for car is: $"<<250<<endl;
            }
        }
        void bike()
        {
            int g;
            hour = g;
            cout<<"Enter the number of hours: ";
            cin>>hour;
            if (hour<3){
                cout<<"The parking charge for bike is: $"<<hour*30<<endl;
            }
            else{
                cout<<"The parking charge for bike is: $"<<120<<endl;
            }
        }
        void truck()
        {
            int e;
            hour = e;
            cout<<"Enter the number of hours: ";
            cin>>hour;
            if (hour<3){
                cout<<"The parking charge for truck is: $"<<hour*100<<endl;
            }
            else{
                cout<<"The parking charge for truck is: $"<<450<<endl;
            }
        }
};
class multitime{
    int hour;
    int car;
    int bike;
    int truck;
    public:
        void cars()
        {
            int h,c;
            car=c;
            hour = h;
            cout<<"Enter the number of hours: ";
            cin>>hour;
            cout<<"Enter the number of cars: ";
            cin>>car;            
            if (hour<3){
                cout<<"The parking charge for car is: $"<<(hour*50)*car<<endl;
            }
            else{
                cout<<"The parking charge for car is: $"<<250*car<<endl;
            }
        }
        void bikes()
        {
            int h,b;
            bike=b;
            hour = h;
            cout<<"Enter the number of hours: ";
            cin>>hour;
            cout<<"Enter the number of bikes: ";
            cin>>bike;            
            if (hour<3){
                cout<<"The parking charge for bikes is: $"<<(hour*30)*bike<<endl;
            }
            else{
                cout<<"The parking charge for bikes is: $"<<120*bike<<endl;
            }
        }
        void trucks()
        {
            int h,t;
            truck=t;
            hour = h;
            cout<<"Enter the number of hours: ";
            cin>>hour;
            cout<<"Enter the number of trucks: ";
            cin>>truck;            
            if (hour<3){
                cout<<"The parking charge for trucks is: $"<<(hour*50)*truck<<endl;
            }
            else{
                cout<<"The parking charge for trucks is: $"<<450*truck<<endl;
            }
        }
};
int main(){
    time t1;
    multitime t2;
    do{
    int choise;    
    cout<<"Choose the vehicle from below : \n";
    cout<<"1. Single Vehicle"<<endl;
    cout<<"2. Multiple Vehicle"<<endl;
    cout<<"Enter your choice: ";
    cin>>choise;
    switch(choise){
        case 1:
            int choice;    
            cout<<"Choose a vehicle from below : \n";
            //cout<<"number of vehilce\n";
            cout<<"1. Car\n";
            cout<<"2. Bike\n";
            cout<<"3. Truck\n";
            cout<<"Enter the type of vehicle: ";
            cin>>choice;
            switch(choice){
            case 1:
                t1.car();        
                break;
            case 2:
                t1.bike();
                break;
            case 3:
                t1.truck();
                break;
            
            default:
                break;
            }
        break;
        case 2:
            int choicee;    
            cout<<"Choose a vehicle from below : \n";
            //cout<<"number of vehilce\n";
            cout<<"1. Cars\n";
            cout<<"2. Bikes\n";
            cout<<"3. Trucks\n";
            cout<<"Enter the type of vehicle: ";
            cin>>choicee;
            switch(choicee){
            case 1:
                t2.cars();        
                break;
            case 2:
                t2.bikes();
                break;
            case 3:
                t2.trucks();
                break;
            
            default:
                break;
        }break;
        default:
            break;
    }
}while( true);
    

    
    return 0;
} 
