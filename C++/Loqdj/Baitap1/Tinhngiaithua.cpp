#include<bits/stdc++.h>
using namespace std;
long long gt(int n){
  long long res=1;
  for(int i=n;i>=1;i--){
    res*=i;
  }
  return res;
}
int main(){
  int t;
  cin>>t;
  vector<long long> a;
  
  while(t--){
    int n; cin>>n;
    long long x= gt(n) ;
    a.push_back(x);
  }
  for(int i=0;i<a.size();i++){
    cout << a[i] << endl;
  }
}