/*

Exercise P3.4

*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Grade: ";
    string grade;
    cin >> grade;

    double plusminus = 0;
    if(grade.find("+") == 1)
    {
        plusminus = 0.3;
    }
    if(grade.find("-") == 1)
    {
        plusminus = -0.3;
    }
    if(grade[0] == 'A')
    {
        if(plusminus > 0)
        {
            cout << 4 <<endl;
        }
        else
            cout << 4 + plusminus << endl;
    }
    if(grade[0] == 'B')
    {
        cout << 3 + plusminus << endl;
    }
    if(grade[0] == 'C')
    {
        cout << 2 + plusminus << endl;
    }
    if(grade[0] == 'D')
    {
        cout << 1 + plusminus << endl;
    }



    // if(grade == "A+")
    // {
    //     cout << 4 << endl;
    // }
    // if(grade == "A")
    // {
    //     cout << 4 << endl;
    // }
    // if(grade == "A-")
    // {
    //     cout << 4-0.3 << endl;
    // }
    // if(grade == "B+")
    // {
    //     cout << 3+0.3 << endl;
    // }
    // if(grade == "B")
    // {
    //     cout << 3 << endl;
    // }
    // if(grade == "B-")
    // {
    //     cout << 3-0.3 << endl;
    // }
    // if(grade == "C+")
    // {
    //     cout << 2+0.3 << endl;
    // }
    // if(grade == "C")
    // {
    //     cout << 2 << endl;
    // }
}