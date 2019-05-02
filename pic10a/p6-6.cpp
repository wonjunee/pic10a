/*

    Exercise P6.6.

*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b)
{
    vector<int> c;

    int total_size = a.size() + b.size();

    int ind_a = 0;
    int ind_b = 0;

    while(c.size() < total_size)
    {
        if(ind_b < b.size() && ind_a < a.size())
        {
            if(a[ind_a] > b[ind_b])
            {
                c.push_back(b[ind_b]);
                ind_b++;
            }
            else
            {
                c.push_back(a[ind_a]);
                ind_a++;
            } 
        }
        else if(ind_b < b.size())
        {
            c.push_back(b[ind_b]);
            ind_b++;
        }
        else
        {
            c.push_back(a[ind_a]);
            ind_a++;
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
    b.push_back(4);
    b.push_back(7);
    b.push_back(9);
    b.push_back(9);
    b.push_back(11);

    vector<int> c = merge_sorted(a,b);

    for(int i=0; i<c.size(); ++i)
    {
        cout << c[i] << ", ";
    }
    cout << endl;

}