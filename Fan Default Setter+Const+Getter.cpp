// Fan Default Setter+Const+Getter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Fan
{
private:
    float speed;


public: 
    Fan();
    void setSpeed(float speed);
    float getSpeed() const;
};

int main()
{

    Fan my_fan;

    float input_speed;

    cout << "Enter fan speed: ";
    cin >> input_speed;

    my_fan.setSpeed(input_speed);

    cout << "Fan Speed: " << my_fan.getSpeed() << endl;

    return 0;
}

Fan::Fan()
{
    speed = 0;
}



void Fan::setSpeed(float speed)
{
    this->speed = speed;
}


float Fan::getSpeed() const
{

    return speed;

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
