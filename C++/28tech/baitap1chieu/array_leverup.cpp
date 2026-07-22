#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<int>a(n);
  for(int &x:a) cin>>x;
  int i=1,dem=0;
  while(i<n){
    if(a[i-1]>a[i]){
      int chenhlech=a[i-1] -a[i];
      a[i]+=chenhlech;
      dem+=chenhlech;
    }
    else{
      i++;
    }
  }
  cout <<dem<<endl;
  
}