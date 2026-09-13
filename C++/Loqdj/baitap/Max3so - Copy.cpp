#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[3];
  int x=-1e9;
  for(int i=0;i<3;i++){
    cin>>a[i];
    if(a[i]>x){
      x=a[i];
    }
  }
  cout << x;
}