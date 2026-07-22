#include <iostream>
#include<vector>
#define ll long long
using namespace std;

int main() {
	ll n, k;
	cin >> n >> k;
	bool found = false;
	vector<ll> a(n);
	for(ll i=0; i<n;i++)
	{
		cin >> a[i];
	}
	vector<ll> prefix(n + 1, 0);

	for (ll i = 1; i <=n; i++)
	{
		prefix[i] = prefix[i - 1] + a[i - 1];

	}
	for (ll i = 0; i < n; i++)
	{
		for (ll j=i;j<n;j++)
		{
			ll sum = prefix[j] - prefix[i];
			if (sum==k)
			{
				found=true; break;
			}
		}
		if (found)
		{
			break;
		}
	}
	cout << (found == true ? "yes" : "no");
}