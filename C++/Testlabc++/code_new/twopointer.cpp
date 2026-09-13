#include<bits/stdc++.h>
using namespace std;
int cnt[1000002];
int main(){
    //nhap vao trc
    int n,m; cin>>n>>m;
    int a[n]; int b[m];
    for (int &x:a) cin>>x;
    for (int &x:b) cin>>x;
    int i=0; int j=0;
    while (i<n&&j<m)
    {
        if(a[i]<b[j]){
            ++i;
        }
        else{
            cout << i << " "; j++;
        }

    }
    while (j<m)
    {
        cout << n << " "; j++;
    }
    

  
    
    
}