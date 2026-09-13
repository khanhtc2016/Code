#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,m; cin>>n>>m;
  cout << (m-(n%m))%m;
}