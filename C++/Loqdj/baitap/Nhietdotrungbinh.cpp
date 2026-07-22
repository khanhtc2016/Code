#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin>>n;
  vector<float> a(n);
  float sum=0;
  for(float &x:a){ cin>>x;
    sum+=x;
  }
  cout <<fixed << setprecision(2) << sum/n;
}