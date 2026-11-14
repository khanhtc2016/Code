#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(0);
  int q; cin>>q;
  while(q--){
    int a[500][500];
    int n,m; cin>>n>>m;
    int max_val=INT_MIN;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
        max_val=max(max_val,a[i][j]);
      }
    }
    cout << max_val << "\n";
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(max_val==a[i][j]){
          cout << "so lon nhat co vi tri: A" << "[" << i+1 << "]" << "[" << j+1 << "]" << "\n";
        }
      }
    }

    
  }
}