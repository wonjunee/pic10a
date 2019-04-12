#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    int j = ++i; // add 1 -> i = 1, assign j = i = 1
    int k = i++; // assign k = i = 1, add1 -> i = 2

    int z = ++i + j++ + ++k; 
    // 1. add values to i and k -> i=3, k=2
    // 2. assign value to z -> z = i + j + k = 3 + 1 + 2 = 6
    // 3. add value to j -> j=2

    cout << "i=" << i << endl; //i=2 -> i=3
    cout << "j=" << j << endl; //j=1 -> j=2
    cout << "k=" << k << endl; //k=1 -> k=2
    cout << "z=" << z << endl; //z=2
}