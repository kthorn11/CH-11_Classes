// Laptop Price Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Laptop
{
private:
	float laptop_price;



public:
	Laptop(float price);
	void displayPrice();

};



int main()
{
	Laptop laptop_a(45000);
	Laptop laptop_b(62000);
	Laptop laptop_c(81000);


	cout << "Laptop A Price: ";
	laptop_a.displayPrice();

	cout << "Laptop B Price: ";
	laptop_b.displayPrice();

	cout << "Laptop C Price: ";
	laptop_c.displayPrice();


	return 0;
}

Laptop::Laptop (float price)
{

	laptop_price = price;

}


void Laptop::displayPrice()
{
	cout << laptop_price << endl;

}







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
