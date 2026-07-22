#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[100002];
int main(){
int TC; cin>>TC;
while (TC--)
{
    int n; cin>>n;
    int a[n];
    for ( int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(cnt[a[i]]==2){
            ++ans;
        }
    }
    cout << ans << endl;

}

    
}