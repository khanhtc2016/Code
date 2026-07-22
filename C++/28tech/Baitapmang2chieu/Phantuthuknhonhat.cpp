#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int> a(n*n);
  for(int i=0;i<n*n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  k--;
  cout << a[k] << endl;
}