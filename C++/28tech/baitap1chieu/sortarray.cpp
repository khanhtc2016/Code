
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i <n; i++)
	{
		cin >> a[i];

	}
	int pos[101] = { 0 };

	for (int i = 0; i < m; i++)
	{
		int x; cin >> x;
		pos[x - 1] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (pos[i]==0)
		{
			continue;
		}
		int intdex = i;
		while (intdex < n-1 && pos[intdex]) {
			intdex++;
		}
		sort(a.begin() + i, a.begin() + intdex+1);
		i = intdex;
	}
	bool of = true;
	for (int i = 0; i < n-1; i++)
	{
		if(a[i] < a[i + 1])
		{
			continue;
		}
		else
		{
			of = false;
			break;
		}
	}
	cout << (of ? "YES" : "NO") << endl;
}

