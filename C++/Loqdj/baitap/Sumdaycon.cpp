#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,x,q;
  cin >>n>>x>>q;
  vector<long long> a(n);
  for(long long &x:a) cin>>x;
  long long dem=0;
  vector<long long> prefix(n+1,0);
  for(int i=1; i<=n;i++){
    prefix[i]=prefix[i-1]+a[i-1];
  }
  
  
  while(q--){
    int u,v; cin>>u>>v;
    long long sum=prefix[v]-prefix[u-1];
    
    if(sum<x)
    dem++;
    
  }
  cout << dem << endl;
  
}