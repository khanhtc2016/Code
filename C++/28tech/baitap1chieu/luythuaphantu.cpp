#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int Mod=1000000007;
int main(){
	//de bai: tinh luy thua mang a[n] nhap vao tu n-1 den 0
	int TC; cin>>TC;
	while (TC--){
		int n,x; cin>>n>>x;
		int a[n]; 
		for(int i=0;i<n;i++) cin>>a[i];
		ll lt=1,res=0;
		for(int i=n-1;i>=0;i--){
			res+=a[i]*lt;
			res%=Mod;
			lt*=x;
			lt%=Mod;
		}
		
			
		cout << res << endl;
	}
}
