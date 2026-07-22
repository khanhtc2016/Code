#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,m; cin>>n>>m;
  int a[n+1][m+1];
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
  int q; cin>>q;
  while(q--){
    int h1,h2,c1,c2;
    cin>>h1>>h2>>c1>>c2;
    int sum=0;
    for(int i=h1;i<=h2;i++){
      for(int j=c1;j<=c2;j++){
        sum+=a[i][j];
      }
      
    }
    cout << sum << endl;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  // int n; cin>>n;
  // vector<int>a(n);
   
  // for(int &x:a) cin>>x;
  // vector<int> prefix(n+1);
  // for(int i=1;i<=n;i++){
  //   prefix[i]=prefix[i-1]+a[i-1];
  // }
  // int q; cin>>q;
  // while(q--){
  //   int l,r; cin>>l>>r;
  //   cout << prefix[r]-prefix[l-1] <<endl;
  // }
    
    
  
}