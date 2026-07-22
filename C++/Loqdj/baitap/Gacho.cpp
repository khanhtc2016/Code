#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m; cin>>n>>m;
  int ga=n;
  int cho=0;
  while((ga+cho)!=36 || (2*ga)+(4*cho)!=100){
    ga--;
    cho++;
  }
  cout << ga << " " << cho << endl;
}