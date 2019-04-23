/*

Exercise P3.4

Second Solution

*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Grade: ";
    string grade;
    cin >> grade;

    if(grade == "A+")
    {
        cout << 4 << endl;
    }
    if(grade == "A")
    {
        cout << 4 << endl;
    }
    if(grade == "A-")
    {
        cout << 4-0.3 << endl;
    }
    if(grade == "B+")
    {
        cout << 3+0.3 << endl;
    }
    if(grade == "B")
    {
        cout << 3 << endl;
    }
    if(grade == "B-")
    {
        cout << 3-0.3 << endl;
    }
    if(grade == "C+")
    {
        cout << 2+0.3 << endl;
    }
    if(grade == "C")
    {
        cout << 2 << endl;
    }

}