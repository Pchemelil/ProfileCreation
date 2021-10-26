#include <iostream>
using namespace std;

int main()
{
	string Fname, Lname, Meal, Movie;
	cout<< "Enter your first name:\n";
	getline(cin,Fname);
	cout<< "Enter your Last name:\n";
	getline(cin,Lname);
	cout<< "Enter your favourite meal:\n";
	getline(cin,Meal);
	cout<< "Enter your favourite movie:\n";
	getline(cin,Movie);
	cout<<"\n\n";
	cout<< Fname << " " << Lname <<"'s favourite things are: ";
	cout<< Meal << " and the movie ";
	cout<< Movie;
	
	return 0;
	
}
