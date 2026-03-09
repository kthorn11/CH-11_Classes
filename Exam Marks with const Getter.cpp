// Exam Marks with const Getter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


class Exam
{
private:
	float marks;

public:

	void setMarks(float marks);
	float getMarks() const;

};

int main()
{
	Exam my_exam;
	float input_marks;


	cout << "Enter marks: ";
	cin >> input_marks;

	my_exam.setMarks(input_marks);

	cout << "Marks: " << my_exam.getMarks() << endl;



	return 0;
}


void Exam::setMarks(float marks)
{

	this->marks = marks;



}

float Exam::getMarks() const
{

	return marks;


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
