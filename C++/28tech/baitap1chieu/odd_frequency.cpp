#include <iostream>
#include <vector>
using namespace std;
// for a[n] element, all element is even just one element is odd, then the odd element is the answer then find it
int main()
{
	//test case
	int tc;
	cin >> tc;

	while (tc--) {
		//use xor operator to find the odd element
		// 0-0 =>0 1-1 =>0 0-1 =>1 1-0 =>1
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int ans = a[0];
		for (int i = 1; i < n; i++)
		{
			ans ^= a[i];
		}
		cout << ans << endl;
		//done




	}
}

