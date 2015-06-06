 /*======================================================================*\
 * 
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:   OSUOBIEM, GABRIEL IGELLE
 * Reg No:  46063080GE
 * Department:  COMPUTER SCIENCE
 *
 \*======================================================================*/

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "\n		    ---------\n";
	cout << "		    |WELCOME|\n";
    cout << "		    ---------\n\n";
    cout << "This program ccomputerizes health care records.\n";
    cout << "Please adhere to instructions strictly else software would break. Thanks\n\n";
    
    cout << "\nEnter first name: ";                	    // prompt patient to input first name
    getline (cin,firstName);    // computer stores patient's input as variable firstName
   
    cout << "\nEnter Last name: ";                	    // prompt patient to input last name
    getline (cin,lastName);     // computer stores patient's input as variable lastName
   
    cout << "\nEnter your Gender. Eiter Male or Female: ";  // prompts for patient's gender
    getline (cin,gender);       // computer stores patient's input as variable gender

    cout << "\nEnter your birth month \n(e.g. 02 for February) : "; // prompt for patient's month of birth
    cin >> month;               // computer stores patient's input as variable month
   
    cout << "\nEnter your birth day \n(e.g. 22 for the 22nd day of the month) : "; // prompt for patient's day of birth
    cin >> day;                 // computer stores input as variable day
   
    cout << "\nEnter your birth year \n(e.g. 1997) : ";         // prompt for patient's year of birth
    cin >> year;                // computer stores input as variable year
   
    cout << "\nEnter current day \n(e.g. 22 for the 22nd day of the month) :   ";	  // prompt for patient to input current day
    cin >> currentDay; 		    // computer stores patient's input as variable currentDay
    
    cout << "\nEnter current month \n(e.g. 02 for february) : ";	// prompt for patient to input current month
    cin >> currentMonth; 	    // computer stores patient's input as variable currentMonth

    cout << "\nEnter current year \n(e.g. 1997) : ";	// prompt for patient to input current year
    cin >> currentYear;		    // computer stores patient's input as variable currentYear    
    
	cout << "\nEnter your weight ( in kilograms ) : ";         // prompt for patient to input weight ( in kilograms )
    cin >> weight;              // computer stores input as variable weight

    cout << "\nEnter your height ( in meters ) : ";                 // prompt for patient to input height ( in meters )
    cin >> height;              // computer stores input as variable height

    
    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
   HealthProfile healthProfile( firstName, lastName, gender, month, day, year, weight, height, currentMonth, currentDay, currentYear );
   
   
   // Print information from the object - by calling getInformation() function
    
    healthProfile.getInformation();
    system("PAUSE");
    return 0;
}

 /*========================================*\ 
 * IDE: DevC++ 5.11 
 * Compiler: TDM-GCC 4.9.2 32-bit Release
 * Platform: Windows8 pro
 \*========================================*/
