#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x,y; cin>>n>>x>>y;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    
   cin>>a[i];
  if(a[i]%2==0)
  a[i]-=y;
  
  else
  a[i]+=x;}
  for(int i=0;i<n;i++)
  cout << a[i]<<" ";
  cout << endl;
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++)
  cout << a[i]<<" ";
}