#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,m; cin>>n>>m;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first >> a[i].second;
    }
    nth_element(a.begin(),a.begin()+m-1,a.end(),[](pair<int,int> x, pair<int,int> y){
        if(x.first != y.first)
        return x.first > y.first;
        return x.second > y.second;
    });
     cout << a[m-1].first << " " << a[m-1].second;

    
}