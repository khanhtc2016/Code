#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  getline(cin,s);
  int cnt[10000007]={0};
  bool kytu=true;
  int j=0;
  for(char c : s){
    if(c!= ' '){
      cnt[j]++;
      kytu=false;
    }
    else if(!kytu){
      j++;
      kytu=true;
    }}
    for(int i=0; i<=j; i++){
      if(cnt[i]!=0){
        cout << cnt[i] << " ";
      }
    }
  
  
  
}