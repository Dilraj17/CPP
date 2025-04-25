// LEVEL 1 Basic Toll Calculation
// The system asks for vehicle type, 1. Car 2. Bike 3. Truck
// The system asks for number of hours parked 1. Car 50/hr and 250>3hr 2. Bike 30/hr and 120>3hr 3. 100/hr and 450>3hr
// Display calculated fee 
// After completing one vehicle user moves to next vehicle
// LEVEL 2 Processing multiple vehicles
// The system allows multiple entries for different vehicles
// The user can enter multiple vehicles one by one untile they decide to sotp
// It keeps track of vehicles and displays 
// 	Total number of vehicles processed
// 	Final toll collection. Total toll collected for the day

#include <iostream>
using namespace std;

int vehicleChoice, hoursParked, cost = 0, totalCost = 0, noOfVehicles = 0, anotheR = 0;

//Input vehicle
void enterVehicle() {
	cout << "Select vehicle to park: \n";
	cout << "1. Car - $50 per hour and $250 for more than 3 hours\n";
	cout << "2. Bike - $30 per hour and $120 for more than 3 hours\n";
	cout << "3. Truck - $100 per hour and $450 for more than 3 hours\n";
	cin >> vehicleChoice;
	noOfVehicles++;
}

//Input Hours
void noOfHours() {
	cout << "Enter the no of hours to park the vehicle: \n";
	cin >> hoursParked;
}

//Cost Calculation
void costCalculation(int vehicleChoice, int hoursParked){
	if(hoursParked > 3){
		switch(vehicleChoice){
			case 1: { cost = ((hoursParked-3)*50) + 250;
				 totalCost += cost;
				 break;
			       }
			case 2: { cost = ((hoursParked-3)*50) + 120;
				  totalCost += cost;
				  break;
				}
			case 3: { cost = ((hoursParked-3)*50) + 450;
				  totalCost += cost;
				  break;
				}
			default:{cout << "Error calculating Cost";
				break;
				}
					   
		}
	}	
	else {switch(vehicleChoice ){
				case 1 : { cost = hoursParked * 50;
					   totalCost += cost;
					 break;}
				case 2: { cost = hoursParked * 30;
					  totalCost += cost;
					break;}
				case 3: { cost = hoursParked * 100;
					  totalCost += cost;
					break;}
			}
		}	
	}

//Print Receipt
void printReceipt(int vehicleChoice, int hoursParked){
	switch(vehicleChoice) {
		case 1:{	cout << "--------Receipt--------\n";
				cout << "Vehicle: Car\n";
			       	cout << "No of Hours: " << hoursParked << "\n";
				cout << "Cost: " << cost << "\n";
				cout << "-----------------------\n";	
			break; }
		case 2: {	cout << "--------Receipt--------\n";
				cout << "Vehicle: Bike\n";
				cout << "No of Hours: " << hoursParked << "\n";
				cout << "Cost: " << cost << "\n";
				cout << "-----------------------\n";
			break;}
		case 3: {	cout << "--------Receipt---------\n";
				cout << "Vehicle: Truck";
				cout << "Cost: " << cost << "\n";
				cout << "------------------------";
			break;}
		default: {cout << "Error!\n Please try again"; break;}
	}
	if(anotheR == 1){
		cout << "\nYour total cost: " << totalCost << " and the no of vehicles parked is " << noOfVehicles << "\n";
	} 

}



int main(){
	cout << "**************Welcome To Toll Calculation System*********************\n";
	enterVehicle();
	noOfHours();
	costCalculation(vehicleChoice, hoursParked);
	printReceipt(vehicleChoice, hoursParked);	
	cout << "Do you want to park another vehicle\n"<< "1. Yes\n" << "2. No\n";
	cin >> anotheR;
	if(anotheR == 1){	
	main();
	}
	else if(anotheR == 2){
		return 0;
	}
	else{
		cout << "Please enter a valid no";
	}
}


