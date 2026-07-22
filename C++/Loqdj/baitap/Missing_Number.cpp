#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> a(n - 1);
	map<int, int> mp;
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 1; i <= n ; i++) {
	if(mp[i]==0){
		cout << i << endl;
	}
	}
}