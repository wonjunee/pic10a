/*

    Exercise P6.5.

*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> merge(vector<int> a, vector<int> b)
{
    vector<int> c;

    int smaller_size = min(a.size(), b.size());

    for(int i=0; i<smaller_size; ++i)
    {
        c.push_back(a[i]);
        c.push_back(b[i]);
    }

    if(a.size() > smaller_size)
    {
        for(int i=smaller_size; i<a.size(); ++i)
        {
            c.push_back(a[i]);
        }
    }
    else
    {
        for(int i=smaller_size; i<b.size(); ++i)
        {
            c.push_back(b[i]);
        }   
    }
    return c;
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(4);
    a.push_back(9);
    a.push_back(16);

    vector<int> b;
    b.push_back(9);
    b.push_back(7);
    b.push_back(4);
    b.push_back(9);
    b.push_back(11);

    vector<int> c = merge(a,b);

    for(int i=0; i<c.size(); ++i)
    {
        cout << c[i] << ", ";
    }
    cout << endl;

}