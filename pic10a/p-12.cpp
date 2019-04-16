/*

Solution to the Exercise P2.12.

*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cout << "write >=1000: ";
    cin >> s;

    // 1000

    // total number=4, 1, 3

    // 23456

    // total number=5, 2, 3

    // 234567

    // total number=6, 3, 3

    int total_num = s.length();

    cout << s.substr(0,total_num-3) << "," << s.substr(total_num,3) << endl;

}