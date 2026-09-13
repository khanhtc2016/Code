#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,u,v; cin >> n>>u>>v;
	vector<int> a(n);
	int ans = 0;
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	for (int i = 0; i < n; i++)
	{
		long long sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += a[j];
			int len = j - i + 1;
			if (len >= u && len <= v) {
								ans = max(ans, (int)sum);

			}
			if (len>v)
			{
				break;
			}
		}
	}cout << ans << endl;

}

