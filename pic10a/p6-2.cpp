/*

    Exercise P6.2.

*/

#include<iostream>
#include<vector>

using namespace std;

int alternating_sum(vector<int> a)
{
    int sum = 0;
    for(int i=0; i<a.size(); ++i)
    {
        if(i%2==0)
        {
            sum += a[i];
        }
        else
        {
            sum -= a[i];
        }
    }
    return sum;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);

    int result = alternating_sum(v);
    cout << "result=" << result << endl;
}