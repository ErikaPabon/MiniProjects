// pizza.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Pizza
{

private:
	
	int cheese_toppings, pepperoni_toppings;
	string pizza_size;

public:
	
	Pizza()
	{
		pizza_size = "small";
		cheese_toppings = 1;
		pepperoni_toppings = 0;
	}

	
	Pizza(string size_, int cheese, int pepperoni)
	{
		pizza_size = size_;
		cheese_toppings = cheese;
		pepperoni_toppings = pepperoni;
	}

	
	string getSize() { return pizza_size; }
	int getCheeseToppings() { return cheese_toppings; }
	int getPepperoniToppings() { return pepperoni_toppings; }

	
	void setSize(string size_) { pizza_size = size_; }
	void setCheeseToppings(int cheese) { cheese_toppings = cheese; }
	void setPepperoniToppings(int pepperoni) { pepperoni_toppings = pepperoni; }

	double calcCost()
	{
		double cost = 0.0;
		
		if (pizza_size.compare("small") == 0) {
			cost = 10.0 + (getCheeseToppings() + getPepperoniToppings()) * 2;
		}
		
		if (pizza_size.compare("medium") == 0) {
			cost = 12.0 + (getCheeseToppings() + getPepperoniToppings()) * 2;
		}
		// calculating cost for a large pizza
		if (pizza_size.compare("large") == 0) {
			cost = 12.0 + (getCheeseToppings() + getPepperoniToppings()) * 2;
		}
		return cost;
	}
};


int main()
{
	
	Pizza p1;
	p1.setSize("large");
	p1.setCheeseToppings(1);
	p1.setPepperoniToppings(1);
	

	cout << "Pizza 1 Details:\n";
	cout << "Size: " << p1.getSize() << endl;
	cout << "Number of Cheese Toppings: " << p1.getCheeseToppings() << endl;
	cout << "Number of Pepperoni Toppings: " << p1.getPepperoniToppings() << endl;
	cout << "Cost: $" << p1.calcCost() << endl;
	cout << endl;

	return 0;
}
/*
Pizza 1 Details:
Size: small
Number of Cheese Toppings: 2
Number of Pepperoni Toppings: 2
Cost: $18
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
