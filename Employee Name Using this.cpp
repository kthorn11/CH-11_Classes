// Employee Name Using this.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private: 
    string employee_name;
    float employee_salary;

public:
    void setEmployee(string employee_name, float employee_salary);
    void displayEmployee();

};

int main()
{
    Employee my_employee;


    string input_name;
    float input_salary;

    cout << "Enter employee name: ";
    getline(cin, input_name);

    cout << "Enter employee salary: ";
    cin >> input_salary;

    my_employee.setEmployee(input_name, input_salary);


    my_employee.displayEmployee();
   

    return 0;
}


void Employee::setEmployee(string employee_name, float employee_salary)
{

    this->employee_name = employee_name;
    this->employee_salary = employee_salary;

}

void Employee::displayEmployee()
{
    cout << "Employee Name: " << employee_name << endl;
    cout << "Employee Salary: " << employee_salary << endl;
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
