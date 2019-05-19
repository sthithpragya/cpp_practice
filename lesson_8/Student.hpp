#include <iostream>
#include <string>
using namespace std;

class Student{
	// declaring members
		string name;
		int gradDate;
		int id;
	// declaring methods - 1st constructor and destructor, 2nd setter, then getter then misc methods
	// name setter methods as setVariablename
	// name getter methods as getVariablename

	public:
		Student(); // syntax to declare constructor -> ClassName(); no return type, not even void
		// an alternative is to pass the constructor with parameters
		// Student(string new_name, int new_gradDate, int new_id);
		~Student(); // syntax for a destructor
		void setname(string new_name);
		void setgradDate(int new_date);
		void setid(int new_id);

		string getname();
		int getgradDate();
		int getid();

		void print();
};


// To define the above mentioned class methods _ 
//You will need to signify that the functions are part 
//of the class definition by using the namespace classname::
// This is done since mutiple different functions can be defined
// and it is important to specify which functions belong to
// which class or are independent

/*
Syntax - 
return_type ClassName:: accessFunction1(function parameters)
{
    function statements;
}
*/

// Constructor - assigns initial values to the members
Student::Student(){
	name = "unknown";
	gradDate = 2099;
	id = 9999;
}

// Destructor - useful for memory cleanup
Student::~Student(){
	cout<<"Clearing database"<<endl;
}

void Student::setname(string new_name){
	name = new_name;
}
void Student::setgradDate(int new_date){
	gradDate = new_date;
}
void Student::setid(int new_id){
	id = new_id;
}

string Student::getname(){
	return name;
}
int Student::getgradDate(){
	return gradDate;
}
int Student::getid(){
	return id;
}

void Student::print(){
	cout<<name<<" "<<id<<" "<<gradDate<<endl;;
}