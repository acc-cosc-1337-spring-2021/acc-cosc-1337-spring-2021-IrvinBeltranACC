//write include statements

#include <iostream>
#include "variables.h"
//using name spaces for cin and cout

using std:: cout; using std::cin ;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout<<"\nWhat is the meal amount? (price before taxes and other fees): $";
	cin>> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"\nHow much of the meal amount are you tipping the waiter? (ex. type '50' for 50% tip): ";
	cin>>tip_rate;
	

	tip_rate = tip_rate / 100;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"\nHere is your receipt:"<<"\n\nMeal Amount: $"<< meal_amount<<"\nSales Tax: $"<<tax_amount<<"\nTip Amount: $"<<tip_amount<<"\n-------------------"<<"\nTotal: $"<<total<<"\n";

	
	return 0;
}
