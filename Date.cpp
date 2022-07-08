// Date class member function definitions 
#include <iomanip> 
#include <sstream>
#include <stdexcept>
#include <iostream>
#include "Date.h" // Date class definition 

using namespace std; 

// Constructor function to initialize private data; 
// Call member function setDate to set variables; 
Date::Date(int year, int month, int day){
	setDate(year, month, day); 
}

// set values of year, month and day 
Date& Date::setDate(int y, int m, int d){
	setYear(y);
	setMonth(m);
	setDay(d);
	
	return *this; // enables cascading 
}

// set year value 

Date& Date::setYear(int y){
	if(y > 0){
		year = y ;
	}else{
		throw invalid_argument("year must be than 0 ") ; 
	}

	return *this; // enables cascading 
}

// set month value 

Date& Date::setMonth(int m){
	if(m > 0 && m < 13){
		month = m ; 
	}else{
		throw invalid_argument("month be 1 - 12") ; 
	}

	return *this; // enables cascading 
}

// set date value 

Date& Date::setDay(int d){
	if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 || getMonth() == 7 || getMonth() == 8 || getMonth() == 10 || getMonth() == 12){
		if (d < 32 && d > 0){
			day = d; 
		}else{
			throw invalid_argument("Invalid") ; 
		}
	}
	if (getMonth() == 2){
		if(getYear() %4 == 0){
			if(d < 30 && d > 0){
				day = d ; 
			}else{
				throw invalid_argument("Invalid") ; 
			}
		}else{
			if(d < 29 && d > 0){
				day = d; 
			}else{
				throw invalid_argument("Invalid") ; 
			}
		}
	}
	if (getMonth() == 4 || getMonth() == 6 || getMonth() == 9 || getMonth() == 11){
		if(d < 31 && d > 0){
			day = d; 
		}else{
			throw invalid_argument("Invalid") ; 
		}
	}
	
	return *this; 
}

// get year value 
unsigned int Date::getYear() const {
	return year; 
}

// get month value 
unsigned int Date::getMonth() const {
	return month; 
}

// get day value 
unsigned int Date::getDay() const {
	return day; 
}

void Date::outputdate(){
	cout<<getDay()<<"||"<<getMonth()<<"||"<<getYear()<<endl; 
}