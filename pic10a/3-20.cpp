/*

Exercise P3.20

*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "number: ";
    cin >> number;

    while(number != 1)
    {
        for(int i=2; i <= number; ++i)
        {
            if(number%i==0)
            {
                cout << i  << endl;
                number /= i;
                break;    
            }
        }
    }
    return 0;
}