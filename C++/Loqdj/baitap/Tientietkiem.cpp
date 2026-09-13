#include<bits/stdc++.h>
using namespace std;
int main(){
  float n; cin>>n;
  float sum=n;
  for(int i=1;i<=10;i++){
    
    sum+=n*5/100;
    cout << fixed << setprecision(3) <<sum<< endl;
    n=sum;
  }
}