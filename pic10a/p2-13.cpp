/*

Exercise P2.13.

*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    cout << "Please enter an integer between 1,000 and 999,999: ";
    cin >> s;

    string new_s = s.substr(0,s.length()-4) + s.substr(s.length()-3,3);
    cout << new_s << endl;
}