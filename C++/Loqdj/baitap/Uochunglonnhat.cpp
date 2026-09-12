#include<bits/stdc++.h>
using namespace std;
void solon(int &a, int &b){
  if(b>a){
    int temp=a;
    a=b;
    b=temp;
  }
}
void ucln(int a,int b){
  solon(a,b);
  if(a>b){
    while(b!=0){
      int r=a%b;
      a=b;
      b=r;
      
    }
    cout <<"Uoc chung lon nhat: "<< a << endl;
  }
}
int main(){
  int a,b;
  cin>>a>>b;
  ucln(a,b);
}