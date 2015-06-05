 /*======================================================================*\
 * 
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name: OSUOBIEM, GABRIEL IGELLE
 * Reg No: 46063080GE
 * Department: COMPUTER SCIENCE
 *
 \*======================================================================*/

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // use iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName( firstName );      // call set function to initialize firstName
    setLastName( lastName );        // call set function to initialize lastName
    setGender( gender );            // call set function to initialize gender
    setMonth( month );              // call set function to initialize month
    setDay( day );                  // call set function to initialize day
    setYear( year );                // call set function to initialize year
    setWeight( weight );            // call set function to initialize weight
    setHeight( height );            // call set function to initialize height
    setAge( currentYear, currentMonth, currentDay, year, month, day );  // call set function to calculate age
}

// function to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "\nFirst Name: " << setw(17) << getFirstName() << endl;
    cout << "\nLast Name: " << setw(19) << getLastName() << endl;
    cout << "\nGender: " << setw(20) << getGender() << endl;
    cout << "\nDate of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "\nWeight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << "\nHeight (in meters): " << setw(10) << getHeight() << endl;
    cout << "\nAge: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "\nBody Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "\nMaximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "\nTarget Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\n-------------------------------------";
	cout << "\nBMI VALUES CHART" << endl;
	cout << "\nUnderweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obese:         30 or greater\n" << endl;
    cout << "-------------------------------------\n";
}


/*  
 * IMPLEMENTATION OF ALL THE GET FUNCTIONS IN CLASS HealthProfile except 
 * constructor and getInformation function which have been provided already
 */

/*
 * Implementation of getBMI function
 * This function calculates and returns the Body Mass Index ( BMI ) of a patient given the following... 
 * weight in pounds of a patient and height in inches of a patient 
 */
double HealthProfile::getBMI()
{
       double myBMI;                    // Declaration of temporary local variable to store BMI value
       myBMI = weight / pow(height,2);  // Calculates BMI and store the result in myBMI
       return myBMI;                    // return the value of myBMI
}                                       // End of getBMI function


/* 
 * Implementation of getMaximumHeartRate function
 * This function calculates and reuturns the maximum heart rate of a patient given the age 
 * of the patient 
 */
int HealthProfile::getMaximumHeartRate()
{
    int maxHeartRate;   // Declaration of temporary local variable for storage of maximum heart rate
    maxHeartRate= 220 - getAge();  // Calculation the maxHeartRate
    return maxHeartRate;      // return the value of maxHeart rate
}   // End of function getMaximumHeattRate


/* 
 * Implementation of getTargetHeartRate function
 * This function calculates and returns the Target Heart Rate of a patient given the  
 * maximum heart rate of the patient 
 */
double HealthProfile::getTargetHeartRate()
{
       const double percent = 85 / 100;   // Definition of temporary constant identifier for storage of the constant 85%
       double targetHeartRate;            // Another temporary variable to store the target heart Rate
       targetHeartRate = 50 - percent * getMaximumHeartRate();   // calculation of the target Heart Rate
       return targetHeartRate;            // return the value of target heart rate
}  // End of function getTargetHeartRate    


/*
 * Implementation of getFirstName
 * This function returns the first name of a patient
 */
string HealthProfile::getFirstName()
{
       return firstName;
} // end of function getFirstName 


/*
 * Implementation of getLastName
 * This function returns the last name of a patient
 */
string HealthProfile::getLastName()
{
       return lastName;
} // end of function getLastName


/*
 * Implementation of getGender
 * This function returns the gender of a patient. that is, whether male or female
 */
string HealthProfile::getGender()
{
       return gender;
} // end function getGender


/* 
 * Implementation of getMonth
 * This function returns the month of birth of a patient
 */
int HealthProfile::getMonth()
{
       return month;
} // end function getMonth


/* 
 * Implementation of getDay
 * This function returns the day of birth of a patient
 */
int HealthProfile::getDay()
{
       return day;
} // end function getDay


/* 
 * Implementation of getYear
 * This function returns the year of birth of a patient
 */
int HealthProfile::getYear()
{
       return year;
} // end function getYear


/*
 * Implementation of getHeight
 * This function returns the height ( in meters ) of a patient
 */
double HealthProfile::getHeight()
{
       return height;
} // end function getHeight


/*
 * Implementation of getWeight
 * This function returns the weight ( in kilograms ) of a patient
 */
int HealthProfile::getWeight()
{
       return weight;
} // end function getWeight


/*
 * Implementation of getAge
 * This function returns the age (in years) of a patient
 */
int HealthProfile::getAge( )
{
    return age;
    // end getAge function
}

/*
 * END OF IMPLEMENTATION OF ALL THE SET FUNCTIONS IN CLASS HealthProfile
 */

/*
 *   IMPLEMENTATION OF ALL THE SET FUNCTIONS IN CLASS HealthProfile
 */


/* 
 * Implementation of setAge function
 * This function calculates the age (in years) of a patient given the following... 
 * year of birth, month of birth, day of birth...
 * current year, current month, and current day.
 */

void HealthProfile::setAge( int currentYear, int currentMonth, int currentDay, int bYear, int bMonth, int bDay )
{
     int newMonth;     // local variable to hold difference between current month and  birth month
     int newDay;       // local variable to hold difference between current current day and  birth day
     int newYear;      // local variable ot hold difference between current year and birth year
     
    newYear = currentYear - bYear;               // The difference between current year and the year of birth
    newMonth = currentMonth - bMonth;            // The difference between current month and the month of birth 
    newDay = currentDay - bDay;                  // The difference between current day and day of birth
    
    if( newMonth >= 0 )                            
    {
      if( newMonth = 0 )                     
      {
        if( newDay >= 0)                
        {
          if( newDay == 0)      
            {age = newYear;}
          else  age = newYear;    
        }
        else age = newYear - 1;         
      }
      else  age = newYear;                  
    }    
    else age = newYear - 1;                      
}              

/* Implementation of setFirstName function.
 * This function sets the value of member variable firstName to new value fName
 */
void HealthProfile::setFirstName(string fName)
{
     firstName = fName;  
}   // end of function setFirstName


/*
 * Implementation of setLastName function.
 * This function sets the value of member variable lastName to new value lName
 */
void HealthProfile::setLastName(string lName)
{
     lastName = lName;  
}    // end of function setLastName


/* 
 * Implementation of setGender function.
 * This function sets the value of member variable setGender to new value nGender
 */
void HealthProfile::setGender(string nGender)
{
     gender = nGender;   
}    // end of function setGender


/*
 * Implementation of setMonth function.
 * This function sets the value of member variable month to new value nMonth
 */
void HealthProfile::setMonth(int nMonth)
{
     month = nMonth;    
}    // end of functon setMonth


/*
 * Implementation of setDay function.
 * This function sets the value of member variable day to new value nDay
 */
void HealthProfile::setDay(int nDay)
{
     day = nDay;
}    // end of function setDay


/*
 * Implementation of setYear function.
 * This function sets the value of member variable year to new value new_year
 */
void HealthProfile::setYear(int nYear) 
{
     year = nYear;   
}    // end of funtion setYear


/*
 * Implementation of setHeight function.
 * This function sets the value of member variable height to new value nHeight
 */
void HealthProfile::setHeight(double nHeight)
{
     height = nHeight;
}    // end of function setHeight


/*
 * Implementation of setWeight function.
 * This function sets the value of member variable weight to new value nWeight
 */
void HealthProfile::setWeight(int nWeight)
{
     weight = nWeight; 
}    // end of function setWeight

 /*========================================*\ 
 * IDE: DevC++ 5.11 
 * Compiler: TDM-GCC 4.9.2 32-bit Release
 * Platform: Windows8 pro
 \*========================================*/
