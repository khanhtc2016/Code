#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>a(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) {cin>>a[i];
        mp[a[i]]++;

    }
    int dem=0;
    //cach 1
    // for (int i = 0; i < 101; i++)
    // {
    //     dem+=mp[i]/2;
    // }
    //cach 2
    //  for (int i = 0; i < n; i++)
    // {
    //     if(mp[a[i]]>=2){
    //         dem++;
    //         mp[a[i]]-=2;
    //     }
    cout << dem;

}