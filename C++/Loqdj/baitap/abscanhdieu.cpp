#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll abs(ll a, ll b){
if(b>a) return b-a;
return a-b;
}
int main(){
ll a,b; cin>>a>>b;
cout << abs(a,b);

}
}