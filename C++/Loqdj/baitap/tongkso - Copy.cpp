#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,k; cin>>n>>k; 
  vector<long long> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  long long sum=0;
  for(int i=0;i<k;i++){
    sum+=a[i];
  }
  long long summx=sum;
  for(int i=0;i<n-k;i++){
    sum=sum-a[i]+a[i+k];
     summx=max(sum,summx);
  }
  cout << summx;
  
}