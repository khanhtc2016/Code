
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n, c; cin >> n >> c;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}int dem = 1;
	for (int i = 0; i < n-1; i++)
	{
		int sec = a[i + 1] - a[i];
		if (sec <= c) {
			dem++;
		}
		else
			dem = 1;
	}
	cout << dem;

}

