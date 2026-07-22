#include<bits/stdc++.h>
using namespace std;
#define ll long long
//xay dung 2 mang chua duong cheo chinh va phu
ll majoy[402][402],minor[402][402]={0};
//majoy la chinh nguoc lai minor la phu
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  //kich co mang
  int n; cin>>n;
  vector<vector<ll>> a(n+1,vector<ll>(n+1));
  //nhap mang
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
  //xay majoy
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      //xay cot j va hang i thu nhat
      if(i==1||j==1) majoy[i][j]=a[i][j];
      else majoy[i][j]=majoy[i-1][j-1]+a[i][j];
    }
  }
  //xay minor
  for(int i=1;i<=n;i++){
    for(int j=n;j>0;j--){
      if(j==n||i==1) minor[i][j]=a[i][j];
      else minor[i][j]=minor[i-1][j+1]+a[i][j];
    }
  }
  //done
  //buoc ke tinh toan
  ll ans=-1e18;
  for(int i=n;i>0;i--){
    for(int j=n;j>0;j--){
      int tmp=min(i,j);
      int hang=i-tmp;
      int cot=j-tmp;
      for(int k=0;k<min(i,j);k++){
        ans=max(ans,0ll + majoy[i][j]-majoy[hang+k][cot+k]-(minor[i][cot+k+1]-minor[hang+k][j+1]));
      }
      
      
    }
  }
  cout << ans << endl;
  
  
  
  
}