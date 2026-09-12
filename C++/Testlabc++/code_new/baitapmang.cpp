#include<bits/stdc++.h>
using namespace std;
    int cnt[1001];

void fibo(){
    int fi[20];
    fi[0]=0; fi[1]=1;
    for (int i = 2; i<=19; i++) fi[i]=fi[i-1]+fi[i-2];
    for (int i = 0; fi[i] <=1000 ; i++)
    {
        cnt[fi[i]]=1;
    }
    

    
}



int main(){
     fibo();
    int TC; cin>>TC;
    while (TC--)
    {
       
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         for (int i = 0; i < n; i++)
        {
            if (cnt[a[i]]) cout << a[i] << " ";
        }
        cout << endl;
    }
    
}

