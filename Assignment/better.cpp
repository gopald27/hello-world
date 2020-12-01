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

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i = 0,j = 0;
    int min = INT_MAX;
    int diff = 0;
    while( i< n and j < n){
        diff = abs(a[i] - b[j]);
        if(diff == 0){
            min = diff;
            break;
        }
        if(min > diff)
            min = diff;
        
        if( a[i] < b[j])
            i++;
        else
            j++;
    }   
    cout << min<<"\n";
    i = 0;
    j = 0;
    while( i< n and j < n){
        diff = abs(a[i] - b[j]);
        if (diff == min)
            cout<< a[i]<<" "<<b[j]<<"\n";
        
        if( a[i] < b[j])
            i++;
        else
            j++;
    } 
    return 0;
}
