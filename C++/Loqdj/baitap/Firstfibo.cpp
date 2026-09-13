#include<bits/stdc++.h>
using namespace std;
vector<long long> fibo;
void init(){
 long long f[93];
f[0]=0;
f[1]=1;
for(int i=2;i<93;i++){
  f[i]=f[i-1]+f[i-2];
}
for(int i=0;i<93;i++){
  fibo.push_back(f[i]);
}


}
int main(){
  init();
  int n; cin>>n;
  for(int i=1;i<=n;i++){
    cout << fibo[i] << " ";
  }
}