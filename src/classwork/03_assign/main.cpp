//Write the include statement for decisions.h here

#include <iostream>
#include "decision.h"

//Write namespace using statements for cout and cin
using std:: cout; using std::cin ;


int main() 
{
	int grade;
	std::string letter_grade_if;
	std::string letter_grade_switch;

	cout<<"\nEnter a numerical grade between 0-100 and I will tell you what letter grade it is! Grade: ";
	cin>> grade;
	if (grade >= 0 && grade <= 100)
	{
		letter_grade_if = get_letter_grade_using_if(grade);
		letter_grade_switch = get_letter_grade_using_switch(grade);
		cout<<"\nYour numerical grade of "<<grade<<" turned into a letter grade is: "<<letter_grade_if<<"! Congrats on the "<<letter_grade_switch<<"!\n\nHope you are happy with your grade.\n";

	}
		
	else
		cout<<"\nThe numbered you entered was out of range.\n";





	return 0;
}

