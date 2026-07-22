#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(0);
  int t; cin>>t;
  while(t--){
   int n; cin>>n;
   vector<vector<int>> a(n,vector<int>(n));
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       cin>>a[i][j];
     }
   }
   for(int j=0;j<n;j++){
     mp[a[0][j]]=1;
   }
   int cnt=0;
   for(int i=1;i<n;i++){
     for(int j=0;j<n;j++){
       if(mp[a[i][j]]==i){
         mp[a[i][j]]++;
       }
     }
   }
   for(auto it:mp){
     if(it.second == n){
       cnt++;
     }
   }
   
   
   cout << cnt;
  }
  
}