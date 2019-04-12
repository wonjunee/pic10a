#include<iostream>
#include<string> // You need to include this library to use substr member function.

using namespace std;

int main()
{
    int i = 0;
    string s = "hello world";

    cout << s << endl;

    /*

    s.substr(a, b)

    a: index where you want to start from
    b: the number of letters you are going to take

    */

    cout << s.substr(7 , 3) << endl; // This wil print out "orl"

    return 0;
}