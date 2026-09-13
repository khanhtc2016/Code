#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}