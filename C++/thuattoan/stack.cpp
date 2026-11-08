#include<bits/stdc++.h>
using namespace std;
bool match(char a, char b){
    return (a=='(' && b==')') ||
           (a=='{' && b=='}') ||
           (a=='[' && b==']');
}
bool isvaild(string s){
  stack<char> st;
  for (char c : s){
    if(c=='('|| c=='{'|| c=='[') st.push(c);
    else{
      if(st.empty()) return false;
       char t=st.top(); st.pop();
      if(!match(t,c)) return false;
    }
    
  }
  return st.empty();
}
int main(){
  string s;
  cin>>s;
   cout << ((isvaild(s)) ? "right" : "false");
}