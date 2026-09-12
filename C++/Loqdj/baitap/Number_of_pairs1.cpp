
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
	int n; cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++) { cin >> a[i];
	//use map
	mp[a[i]]++;
	}
	int dem = 0;
	for (auto i : mp) {
		int x = i.second;
		dem += (x * (x - 1)) / 2;
	}
	cout << dem << endl;
	//done
}
