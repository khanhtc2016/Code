#include<bits/stdc++.h>
using namespace std;
int main(){
  int tc; cin>>tc;
  while(tc--){
    int n,k; cin>>n>>k;
    vector<float>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int i=0,j=k-1;
    
    float tb=0,tb1=0;
    while(j< n){
      float s=0;
     for(int t=i;t<=j;t++){
       s+=a[t];
       if(t==j){
         tb1=s/k;
       }
     }
      i++;  j++;
    tb=max(tb,tb1);
      
    }
 
 cout << tb;
 
 
  }
  
  
  
  
  
}