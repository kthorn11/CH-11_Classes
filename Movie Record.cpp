// Movie Record.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Movie
{
private: 
	string movie_name;
	float ticket_price;


public:
	void setMovie(string name, float price);
	void displayMovie();

};


int main()
{
	Movie my_movie;
	string input_name;
	float input_price;


	cout << "Enterthe movie name: ";
	getline(cin, input_name);

	cout << "Enter the ticket price: ";
	cin >> input_price;

	my_movie.setMovie(input_name, input_price);
	my_movie.displayMovie();



	return 0;
}


void Movie::setMovie(string name, float price)
{
	movie_name = name;
	ticket_price = price;

}

void Movie::displayMovie()
{
	cout << "Movie Name: " << movie_name << endl;
	cout << "Ticket Price: " << ticket_price << endl;
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
