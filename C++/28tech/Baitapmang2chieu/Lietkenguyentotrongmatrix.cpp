#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
  if(n%2==0) {
    if(n==2){
      return true;
    }
    else
    return false;
  }
  if(n%3==0) {
    if(n==3){
      return true;
    }
    else
    return false;
  }
  for(int i=5;i*i<=n;i+=6){
    if(n%i==0 || (n%i+2)==0){
      return false;
    }
  }
  return n>1;
  
}
int main(){
  int t; cin>>t;
  while(t--){
  int n,m; cin>>n>>m;
  int a[500][500];
  map<int,int> mp;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
      }
    }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(prime(a[i][j]) && mp[a[i][j]]==0){
        cout << a[i][j] << " ";
        mp[a[i][j]]=1;
      }
      }
    }
  }

  }
