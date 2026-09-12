#include<bits/stdc++.h>
using namespace std;
int main(){
    //nhap d/lieu
    float a,b,c; cin>>a>>b>>c;
    //dung cong thuc+ chinh so sau dau ,
    cout << fixed << setprecision(1) <<((a+b+c)-min(a,min(b,c))-max(a,max(b,c))) << endl;


}