#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int tc; cin>>tc;
  while(tc--){
    int n; cin>>n; vector<ll> a(n);
    for(int i=0;i<n;i++) cin >>a[i];
    ll sonho=a[0], res=LLONG_MIN;
    for(int i=1;i<n;i++){
      if(sonho<a[i]){
        res=max(res,a[i]-sonho);
      }
      sonho=min(a[i],sonho);
    }
    cout << (res<=0 ? -1 : res) << endl;
    
    
  }
  
  
} 