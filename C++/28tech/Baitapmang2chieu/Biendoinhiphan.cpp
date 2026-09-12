#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int n,m; cin>>n>>m;
  vector<vector<ll>> a(n,vector<ll>(m));
  vector<vector<ll>> b(n,vector<ll>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
      b[i][j]=a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i][j]){
        for(int k=0;k<m;k++)
        b[i][k]=1;
        for(int k=0;k<n;k++)
        b[k][j]=1;
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
  
}