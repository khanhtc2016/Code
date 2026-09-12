#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x; cin>>n>>x;
  vector<int>a(n);
  for(int &x:a) cin>>x;
  int l=0; 
  int sum=0;
  int res=1e9;
  for( int r=0;r<n;r++){
    sum+=a[r];
    while(sum>x){
      res=min(res,r-l+1);
      sum-=a[l]; ++l;
    }
  }
  cout <<(res == 1e9 ? -1 : res) << endl;
  
  
 
    
  
  
  
}