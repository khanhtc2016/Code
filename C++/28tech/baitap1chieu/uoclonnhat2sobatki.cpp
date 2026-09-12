#include<bits/stdc++.h>
using namespace std;
//cach 1
int gcd(int a,int b){
  if(b==0) return a;
  return gcd(b,a%b);
}
const int maxn=1000;
int a[maxn];

//cach 2
map<int,int> mp;
void solve(int n){
  for (int i =1; i < n; i++)
  {
    if(n%i==0){
      mp[i]++;
      if(i!=n/i){
        mp[n/i]++;
      }
    }
  }
  
}


int main(){
  /*int n; cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  int res=1;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      res=max(res,gcd(a[i],a[j]));
    }
  }
  cout << res;*/
  //cach 2
  int n; cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    solve(a[i]);
  }
  int res=1;
  for (auto it:mp)
  {
    if(it.second>=2){
      res=it.first;
    }
  }
  cout << res << endl;




}