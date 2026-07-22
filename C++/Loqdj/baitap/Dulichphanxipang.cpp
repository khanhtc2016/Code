#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,u,v,x,y;
  cin>>a>>b>>u>>v>>x>>y;
  int ngl=x-y;
  if(y<=x){
   int tcapl= a*ngl;
  int  tcapnho=b*y;
  int lual=u*ngl;
  int luanho=v*y;
  int sum=tcapl+tcapnho+lual+luanho;
  cout <<"Tong so tien ve: " << sum << " nghin dong." ;
  }
  
}