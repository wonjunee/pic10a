/*

Exercise P2.1.

*/

#include<iostream>

using namespace std;

int main()
{
    int n = 10;
    for(int i=0; i<n; ++i)
    {
        cout << "1";
        for(int j=0; j<i; ++j)
        {
            cout << "0";
        }
        cout << "\n";
    }
    return 0;
}