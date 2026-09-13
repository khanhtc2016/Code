#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n,m; cin>>n>>m;
  vector<long long>a(n);
  for(long long &x:a) cin>>x;
  sort(a.begin(),a.end());
  
  int l=0,r=n-1;
  long long ans=0;
  while(l<r){
    if(a[r]+a[l]<=m){
      ans+=(r-l);
      l++;
    }
    else{
      r--;
    }
    
  }
  cout << ans;
}