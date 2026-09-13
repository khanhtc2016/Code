#include<iostream>
using namespace std;
#define ll long long


int main() {
	ll a, b;
	cin >> a >> b;
	while (b!=0)
	{
		ll r = a % b;
		a = b;
		b = r;
	}
	cout << a;
}