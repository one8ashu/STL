#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Initialising the vector v
    vector<int> v;
    int t, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    // sort(0, v.size());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    /*cout << endl
    << v.size();*/
    /*cout << endl
         << v.max_size();*/
    /*cout << endl
         << v.empty();*/
    // v.shrink_to_fit();
    /*cout << endl
         << v.front();
    cout << endl
         << v.back();*/
    /*int *pos = v.data();
    cout << endl
         << *pos;*/
    cout << endl
         << v.pop_back();
    return 0;
}