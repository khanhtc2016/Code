#include<bits/stdc++.h>
using namespace std;
int dau(int a[],int n,int x)
{
  int res=-1, l=0,r=n-1;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]==x){
      res=m;
      r=m-1;
    }
    else if(a[m]<x) l=m+1;
    else r=m-1;
  }
  return res;
}
int cuoi(int a[],int n,int x){
  int res=-1, l=0,r=n-1;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]==x){
      res=m;
      l=m+1;
    }
    else if(a[m]<x) l=m+1;
    else r=m-1;
  }
  return res;
}




int main(){
  int n,x; cin>>n>>x;
  int a[n];
  for(int &x:a) cin>>x;
  cout << dau(a,n,x) << " "<<cuoi(a,n,x);
}