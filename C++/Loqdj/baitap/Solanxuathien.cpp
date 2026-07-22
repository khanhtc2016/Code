#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  map<long long,long long> mp;
  for(int i=0;i<n;i++){
    long long x;
    cin>>x;
    mp[x]++;
  }
  for(auto it:mp)
  {
    cout << it.first << " " << it.second << endl;
  }
  
}