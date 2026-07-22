#include<bits/stdc++.h>
using namespace std;
bool mang[10000007];
vector<long long> nto;
void sang(long long n){
    for(long long i=3;i<=n;i=i+2){
        if(mang[i]==false){
            nto.push_back(i);
            for(long long j=i*i;j<=n;j=j+2*i){
                mang[j]=true;
            }
        }
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    nto.push_back(2);
    long long a,b;
    cin>>a>>b;
    sang(b+100);
    long long l=lower_bound(nto.begin(),nto.end(),a)-nto.begin();
    long long r=upper_bound(nto.begin(),nto.end(),b)-nto.begin();
    for(long long i=l;i<r;i++) cout<<nto[i]<<"\n";
}