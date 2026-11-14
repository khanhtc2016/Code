#include<bits/stdc++.h>
using namespace std;
int main(){
int a[500][500];
  int n,m;
int q; cin>>q;
  while(q--)
{
cin>>n>>m;
  for(int i=0;i<n;i++) { 
  for(int j=0;j<m;j++) {
    cin>>a[i][j];
  }   
 }
  vector<int> check;
  int ans=-1e9; 
  for(int i=0;i<n;i++) { 
    int sum=0;
  for(int j=0;j<m;j++) {
    sum+=a[i][j];
  }   
    if(sum>ans){
      ans=sum;
      check.clear();
      check.push_back(i);
    }
    else if(sum==ans){
      check.push_back(i);
    }
  
  }
  cout << ans << endl;
  for(int x : check){
    cout << x+1 << endl;
  }



}  
}
