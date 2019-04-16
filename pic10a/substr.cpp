/*

Example of using substr member function.

*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a = "hello world!\n";

    cout << a.substr(0,5) << endl; // "hello"

    cout << a.substr(2,2) << endl; // "ll"

    cout << a.substr(7,444) << endl; // "orld!\n"

    cout << a.substr(7) << endl; // "orld!\n"
}