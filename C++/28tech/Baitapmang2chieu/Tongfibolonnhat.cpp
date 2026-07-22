#include<bits/stdc++.h>
using namespace std;
set<long long> fibo;
void init(){
  long long f[93]={0};
  f[0]=0;
  f[1]=1;
 for(int i=2;i<93;i++) {
   f[i]=f[i-1]+f[i-2];
 }
 for(int i=0;i<93;i++){
   fibo.insert(f[i]);
 }
 
}
int main(){
  init();
  int tc;
  cin>>tc;
  while(tc--){
  int n,m; cin>>n>>m;
  vector<vector<long long>> a(n,vector<long long>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  int ans=-1;
  int sum=0;
  int cot;
  for(int i=0;i<m;i++){
    long long temp=0;
    int dem=0;
    for(int j=0;j<n;j++){
     if(fibo.count(a[j][i])==1) {
       dem++;
       temp+=a[j][i];
     }
    }
    //for i
    if(temp>ans){
      cot=i;
      ans=dem;
      sum=temp;
    }
    else if(dem==ans){
      if(sum<temp){
      cot =i;
      sum=temp;}
    }
    
  }
  cout << cot+1 << endl;
  for(int i=0;i<n;i++){
    if(fibo.count(a[i][cot])==1)
    cout << a[i][cot] << " ";
  }
  
  
  
  
  
  
  
  //duoi la ngoac test case va main
  }}