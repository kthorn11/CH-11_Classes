// Product Price.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


class Product
{ 
private:
	string product_name;

	float product_price;

public:

	void setProduct(string product_name, float product_price)
	{
		this->product_name = product_name;
		this->product_price = product_price;

	}

	void displayproduct()
	{
		cout << "Product Name: " << product_name << endl;
		cout << "Product Price: " << product_price << endl;
	}

};


int main()
{

	Product product_object;
	string input_name;
		float input_price;

		cout << "Enter the product name: ";
		getline(cin, input_name);

		cout << "Enter the product price: ";
		cin >> input_price;


		product_object.setProduct(input_name, input_price);
		product_object.displayproduct();



	return 0;
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
