/*

Exercise P3.3

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Three numbers: ";
    double a, b, c;

    cin >> a >> b >> c;

    // a = 4, b=9, c=2.5
    // GOAL: to choose b

    if( a>=c && a >=b)
    {
        cout << "largest is " << a << endl;
    }
    else if( b>=a && b>=c)
    {
        cout << "largest is " << b << endl;
    }
    else
    {
        cout << "largest is " << c << endl;
    }

    // Another solution
    cout << "largest is " << max(max(a,b), c) << endl;
}