#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cook your dish here
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int min = INT_MAX;
    int diff = 0;

    for (auto &i : a)
    {
        for (auto &j : b)
        {
            diff = abs(i - j);
            if (min > diff)
                min = diff;
        }
    }
    cout << min<<"\n";
    
    for (auto &i : a)
    {
        for (auto &j : b)
        {
            diff = abs(i - j);
            if (min == diff)
                cout << i << " "<<j << "\n";
        }
    }
    return 0;
}
