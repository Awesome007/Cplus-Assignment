 /*======================================================================*\
 * 
 * HealthProfile.h
 * HealthProfile class definition.This file representsHealthProfie's public
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


#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string, string, string, int, int, int, int, double, int, int, int ); // constructor that initializes patient information
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
	
	// get functions for each attribute except the getAge function which have been provided already
	string getFirstName();			//	function to get patient's first name
	string getLastName();			//	function to get patient's last name
	string getGender();				//	function to get patient's Gender. That is, either male or female
	int getMonth();					//	function to get patient's Month of birth
	int getDay();					//	function to get patient's Day of birth
	int getYear();					//	function to get patient's Year of birth
	int getAge();                   //  function to get patient's age in years
	double getHeight();				//	function to get patient's Height in meters
	int getWeight();				//	function to get patient's Weight in kilograms
	
	// set functions for each attribute
	void setFirstName( string );			//	function to set patients first name
	void setLastName( string );			    //	function to set patients last name
	void setGender( string );				//	function to set patients Gender
	void setMonth( int );					//	function to set patients Month of birth
	void setDay( int );				    	//	function to set patients Day of birth
	void setYear( int );					//	function to set patients Year of birth
	void setHeight( double );				//	function to set patients Height in inches
	void setWeight( int );				    // 	function to set patients Weight in pounds
	void setAge( int, int, int, int, int, int );  //  function to calculate and set patient's Age
	
    // Function prototypes for the constructor,getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has already been provided
    
    
    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile

 /*========================================*\ 
 * IDE: DevC++ 5.11 
 * Compiler: TDM-GCC 4.9.2 32-bit Release
 * Platform: Windows8 pro
 \*========================================*/
