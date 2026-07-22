#include<bits/stdc++.h>
using namespace std;
int main(){
    //test case: 345 + 12 =? 
    string a,b; cin>>a>>b;
    //tao 1 bo nho trong +- vd 8+3=11 se ghi 1 va nho 1 de cong lan sau
    int mem=0;
    string res="";
    //dk mang a luon > b
    if(a.length()>b.length()) swap(a,b);
    //quet theo cac so cua 2 mang ky tu
    int i=a.length()-1;//i=5
    int j=b.length()-1;//j=2
   
    while (i>=0 || j>=0 || mem)
    {
        //tao 1 bien de cong cac gia tri va dung ghi nho
        int sum=mem;//nay la de tung lan cong sau se cong trc lun de hon
        //cong sum cua ca i lan j
        if(i>=0) sum+=a[i--]-'0';//day la doan lay string ve int
        if(j>=0) sum+=b[j--]-'0';
        mem=sum/10; //neu sum=14 thi mem =1
       
        res.push_back(sum%10+'0');
    }
    //vi ca cai res dang cong nguoc do luc dau ta cong tu cuoi ma them sau nen can dao lai
    reverse(res.begin(),res.end());
    cout << res << endl;
}