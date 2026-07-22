#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll timmax2so(ll a, ll b){
    if(b>a) return b;
    return a;
}
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
ll a,b; cin>>a>>b;
cout << timmax2so(a,b) << endl;
}