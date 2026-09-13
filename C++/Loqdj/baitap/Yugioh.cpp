#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sd(ll a){
    if(a<0){
        return -a;
    }
    return a;
}
int main(){
ll n,m; cin>>n>>m;
vector<ll> a(n);
for (int i = 0; i < n; i++)
{
   cin>>a[i];
}
sort(a.begin(),a.end());
ll mtru=0;
for (int i = 0; i < n && i<m; i++)
{
   if(a[i]<0){
    mtru+=sd(a[i]);
   }

}
cout << mtru << endl;
}