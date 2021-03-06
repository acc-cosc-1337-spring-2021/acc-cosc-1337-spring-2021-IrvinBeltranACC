//write includes statements
#include <iosteam>
#include "loops.h"

//write using statements for cin and cout

using std::cin; using std::cout;



/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	char repeat = "Y";

	do
	{

		cout<<"\n PLease enter a number from 1 through 10 you'd like to know the factorial of in numerical form: ";

		bool verify_value_parameter = false;

		while (verify_value_parameter == false)
		{
			cin>> num;
			if (num >= 1 && num <= 10)
			{
				verify_value_parameter = true;
			}
			else
			{
				cout<<"\n\n(ERROR) I'm afraid the number you entered was either out of range or written incorrectly, please try aagin: \n\n";
				
			}
		}

		int factorial_of_num = get_num_factorial(num);

		cout<<"\n\nThe factorial of "<<num<<" is: "<<factorial_of_num;
		cout<<"\n\nEnter 'Y' or 'Yes' to repeat this program, otherwise enter anything else to end this program, hope I was of use.\n\n";

	}

	}while (repeat == "Y" || repeat == "y" || repeat == "Yes" || repeat == "yes");
	
	return 0;
}