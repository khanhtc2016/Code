
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool mang[10000007];
vector<long long> prime;
void sang(long long n) {
	for (long long i = 3; i <= n; i += 2) {
		if (mang[i] == false) {
			prime.push_back(i);
			for (long long j = i * i; j <= n; j = j + 2 * i) {
				mang[j] = true;
			}
		}
	}

}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long a, b;
	prime.push_back(2);
	cin >> a >> b;
		sang(b);
		int r = lower_bound(prime.begin(), prime.end(), a) - prime.begin();
		int l = upper_bound(prime.begin(), prime.end(), b) - prime.begin();
		for (int i = r; i < l; i++) {
			cout << prime[i] << " ";
		}

}

