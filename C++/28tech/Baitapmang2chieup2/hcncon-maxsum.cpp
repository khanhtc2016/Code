#include <bits/stdc++.h>
using namespace std;
//de bai: hinh chu nhat co tong lon nhat

//kdane
int kadane(vector<int> a,int n){
    int max_end_here = 0;
    int res=0;
    for(int i=0;i<n;i++){
        max_end_here += a[i];
        res = max(res,max_end_here);
        max_end_here = max(max_end_here,0);
    }
    return res;
}

int main(){ 
//input
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];

        }}
//cacl
vector<int> temp(n);
int res=0;
for(int l=0; l<m; l++){
    fill(temp.begin(),temp.end(),0);
    for(int r=l;r<m; r++){
        for(int i=0; i<n; i++){
            temp[i] += a[i][r];
        }
        res = max(res,kadane(temp,n));
    }
}

cout << res;
}