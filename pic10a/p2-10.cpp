/*

Exercise P2.10.

*/


#include <iostream>

using namespace std;

int main()
{
    double gallons, efficiency, price;
    cout << "The number of gallons of gas in the tank: ";
    cin >> gallons;
    cout << "The fuel efficiency in miles per gallon: ";
    cin >> efficiency;
    cout << "The price of gas per gallon: ";
    cin >> price;

    cout << "how far: " << gallons * efficiency << "\n";
    cout << "cost per 100 miles: " << price / efficiency << "\n";
}