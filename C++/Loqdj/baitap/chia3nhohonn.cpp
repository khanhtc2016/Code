#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,s=0;
    cin>>n;
    for (long long i = 3; i <= n; i+=3)
    {
        s+=i;
    }
    cout << s;
}