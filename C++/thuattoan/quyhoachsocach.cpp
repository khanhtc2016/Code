#include<bits/stdc++.h>
using namespace std;
void solve(int n, int k){
  long long a[100005];
  a[0]=1; long long sum=0;
  for(int i=1;i<=n;i++){
    if(i<=k){
      sum+=a[i-1];
      a[i]=sum;
    }
    else{
      a[i]=2*a[i-1]-a[i-k-1];
    }}
  cout << a[n];
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);cout.tie(0);
  solve(7,2);
}