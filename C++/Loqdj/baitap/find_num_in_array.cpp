
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
bool bin_search(vector<ll> &a, ll x){
	ll l = 0, r = a.size()-1;
	while (l <= r){
		ll mid = l + (r - l) / 2;
		if (a[mid] == x) return true;
		else if (a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	return false;
}
int main()
{
	ll n, k,x;
   // cin n,k after that cin x[k]
	//k is number questions x is the array of numbers to find in the array of n numbers
	cin >> n >> k;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	while (k--){
		cin >> x;
		if (bin_search(a,x))
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

	}

}
