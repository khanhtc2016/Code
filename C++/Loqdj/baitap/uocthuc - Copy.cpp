#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
void un(int n,map<int,int> &mp){
  for(int i=2;i<n;i++){
    if(n%i==0){
      mp[i]++;
      if(i!=n/i){
        mp[n/i]++;
      }
    }
    
  }
}
int main(){
  int n; cin>>n;
  un(n,mp);
  int dem=0;
  for(int i=2;i<n;i++){
    if(mp[i]>0){
      dem++;
    }
  }
  cout << dem;
  
}