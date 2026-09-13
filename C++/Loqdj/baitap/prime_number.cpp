#include <iostream>
#include<vector>
using namespace std;
#define ll long long
bool isPrime(int n)
{
	if (n <= 1) return false;
	for (int i = 2; i*i <=n ; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
int main()
{
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	//find the maximum element is prime number in the array and show index of the maximum element
	int index = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(a[i]) && a[i] > max)
		{
			max = a[i];
			index = i+1;
		}
	}
	cout << max << endl;
	cout << index << endl;


}

