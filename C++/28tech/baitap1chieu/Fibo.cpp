#include<bits/stdc++.h>
using namespace std;
int fibo[1001];
void sfi(){
  int fi[20];
  fi[0]=0; fi[1]=1;
  for(int i=2;i<=19;i++) fi[i]=fi[i-1]+fi[i-2];
  for(int i=0;fi[i]<1000;i++){
    fibo[fi[i]]=1;
  }
}
int main(){
  sfi();
  int tc; cin>>tc;
  while(tc--){
    int n; cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    for(int i=0;i<n;i++){
      if(fibo[a[i]]==1) cout << a[i]<<" ";
    }
    cout << endl;
  }
  
}