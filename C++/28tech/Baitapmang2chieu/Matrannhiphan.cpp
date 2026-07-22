#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(0);
  int n; cin>>n;
  vector<vector<int>> a(n,vector<int>(3));
  int ans=0;
  for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<3;j++){
      cin>>a[i][j];
      cnt+=a[i][j];
      
    }
    if(cnt>=2){
      ++ans;
    }
  }
  cout << ans << endl;
  
  
}