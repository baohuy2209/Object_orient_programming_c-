#include <string> 

class Date{
	public:
		explicit Date(int = 0, int = 0, int = 0) ; // default contructor ;
		
		// set functions (the Date& return type enable cascading 
		
		Date& setDate(int, int, int) ; // set year, set month, set day 
		Date& setYear(int); // set year 
		Date& setMonth(int); // set month 
		Date& setDay(int); // set day 
		
		unsigned int getYear() const; // get yeat value
		unsigned int getMonth() const; // get month value 
		unsigned int getDay() const; // get day value 

		void outputdate() ;
	private:
		
		unsigned int year; 
		unsigned int month;
		unsigned int day;  
};
