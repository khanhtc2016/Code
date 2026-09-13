
#include <iostream>
using namespace std; 
#include<vector>

int main()
{
    int t; cin >> t;

	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<int>> a(n, vector<int>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		long long ans = -1e18;
		vector<int> cow;
		for (int i = 0; i < n; i++) {
			long long sum = 0;
			for (int j = 0; j < m; j++)
				sum += a[i][j];
			if (sum > ans) {
				ans = sum;
				cow.clear();
				cow.push_back(i + 1);
			}
			else if (sum == ans)
				cow.push_back(i + 1);
		}

		cout << ans << endl;
		for (int x : cow)
			cout << x << " ";
		cout << endl;
	}
}
