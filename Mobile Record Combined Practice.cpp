// Mobile Record Combined Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string brand_name;
        float mobile_price;

public:
    Mobile(string brand, float price);
    void setPrice(float mobile_price);
    string getBrand() const;
    float getPrice() const;

};

int main()
{
    Mobile my_mobile("Samsung", 25000);
    my_mobile.setPrice(27000);

    cout << "Brand: " << my_mobile.getBrand() << endl;
    cout << "Price: " << my_mobile.getPrice() << endl;

    return 0;
}

Mobile::Mobile(string brand, float price)
{

    brand_name = brand;
    mobile_price = price;
}

void Mobile::setPrice(float mobile_price)
{
    this->mobile_price = mobile_price;

}

string Mobile::getBrand() const
{
    return brand_name;

}

float Mobile::getPrice() const
{
    return mobile_price;
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
