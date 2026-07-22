#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ham kt tam giac
bool tamgiac(ll a, ll b,ll c){
  if(a<=0 ||b<=0 ||c<=0)
  return false;
  return (a+b>c && a + c>b && b+c>a);
}
bool tamgiackocan(ll a,ll b,ll c){
    return (a!=b && b!=c && a!=c);
}

int main(){
  ll a,b,c;
  cin>>a>>b>>c;
  if(tamgiac(a,b,c) && tamgiackocan(a,b,c)){
    cout << "YES" << endl;
  }
  else
  cout << "NO" << endl;
}