//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen

#include <iostream>

//using std:: cout; using std::cin ;

using namespace std;

int main() 
{
	int num;

	cout<<"\nEnter an integer please: ";

	std::cin>>num;

	int result = multiply_numbers(num);

	cout<<"\nThe number you entered, multiplied by 5 is: "<<result<<"\n";

	int num1 = 4;

	result = multiply_numbers(num1);

	cout<<"\nFun Fact! Four times five equals: "<<result<<"\n";

	return 0;

}

