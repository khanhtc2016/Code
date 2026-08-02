#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main() {
	//nhap
	int n; cin >> n;
	map<int, int> mp;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;

	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t" << mp[a[i]] << endl;

	}


	
}