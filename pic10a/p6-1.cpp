/*

    Exercise P6.1.

*/

#include<iostream>
#include<vector>

using namespace std;


double scalar_product(vector<double> a, vector<double> b)
{
    double sum = 0;
    for(int i=0; i<a.size(); i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}
int main()
{
    vector<double> a;
    a.push_back(1);
    a.push_back(4);
    a.push_back(2);
    a.push_back(9);
    
    vector<double> b;
    b.push_back(2);
    b.push_back(0);
    b.push_back(3);
    b.push_back(1);

    double result = scalar_product(a,b);

    cout << "result=" << result << endl;

}