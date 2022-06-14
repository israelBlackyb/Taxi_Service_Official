// Israel_Ethan_Taehg_Taxi_Booking.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Header.h"

struct newDriver{ //new driver detail input, creates a new driver
	string fullName;
	char gender; //male, female, other
	string DoB; //date of birth
	string nationality;
	string licenceNumber;
	string expiryDate; //dd/mm/yyyy
	float yearsDriving; //driving experience
	int contactNumber;
	string email;
	string address; //num, street, suburb, city/region
	int bankAccountNumber;
	string bankName;
	int vehicleRegoNum;
	string vehicleModel;
	string wofExpiryDate;
	int endorsmentNumber; //srand
	string endorsmentExpiry; //6 months from date of registration (date)`
};

//function Prototypes
bool eligiblityCheck();

bool eligible;

int driveReg()
{
	DrawLine(15);
	cout << "Welcome New Driver\n";
	DrawLine(15);
	cout<<"Please fill out the following check:\n";
	eligiblityCheck();
	if (eligible == true) {
		filloutDriverRego();
	 }
}

bool eligiblityCheck() {
	int licenceType;
	float yearsDriven;
	float carAge;
	float driverAge;
	cout << "What kind of licence do you have:\n, 1. Learners\n 2. Restricted\n 3.Full\n 4. None\nChoose:"; cin >> licenceType;
	cout << "\nHow many years have you driven: "; cin >> yearsDriven;
	cout << "\nHow many years old is your car? "; cin >> carAge;
	cout << "How many years old are you: " cin >> driverAge;

	if (licenceType == 4 && yearsDriven > 2 && carAge <= 10 && driverAge > 20) {
		eligible = true;
	}
	return eligible;
}

void filloutDriverRego() {
	int randomNumber;
	newDriver test; //to test the ability to fill out form, replace with proper mechanics
	cout << "\nEnter your First and last name (e.g John Smith): "; cin >> test.fullName ;
	cout << "\nEnter your Gender (m, f, o "; cin >> test.gender;
	cout << "\nEnter your Date of Birth (dd/mm/yyyy) "; cin >> test.doB;
	cout << "\nEnter your Nationality: "; cin >> test.nationality;
	cout << "\nEnter your Licence Number "; cin >> test.licenceNumber;
	cout << "\nEnter your licence Date of Expiry "; cin >> test.expiryDate;
	cout << "\nEnter your years of Driving:  "; cin >> test.yearsDriving;
	cout << "\nEnter your contact number "; cin >> test.contactNumber;
	cout << "\nEnter your Email "; cin >> test.email;
	cout << "\nEnter your Bank Account number (16 digits): "; cin >> test.bankAccountNumber;
	cout << "\nEnter your Bank's Name: "; cin >> test.bankName;
	cout << "\nEnter your Vehicle Registration Number "; cin >> test.vehicleRegoNum;
	cout << "\nEnter your WoF Expiry Date "; cin >> test.wofExpiryDate;

	srand((unsigned)time(0));
	for (int i = 100000; i < 999999; i++) {
			test.endorsmentNumber = (rand() % 10) + 1;
	}

	test.endorsmentExpiry = "9/06/2024"; //find way to generate random
} //will need way of chossing inputs for mutliple drivers
	