#include <iostream>
#include<vector>
using namespace std;
#define ll long long
int main()
{
	//nhap-tao mang
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);//nhap mang
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ll sum = 0;
	ll left = 0;
	bool found = false;
	//y tuong: dung floating window-two point
	for ( ll right =0;right<n;right++)
	{
		//cong de right luot qua mang(mang co index la 0,1,2,3,4)
		sum += a[right];// khi cong ma long hon k thi se tru cho left tu index 0 cua mang
		while (sum >k && left<=right)
		{
			sum -= a[left];
			left++;
		}
		//kiem tra no co bang chua va thoat
		if (sum ==k)
		{
			found = true;
			break;

		}
	}
	// cuoi cung chi can xuat ket qua dung toan tu ba ngoi
	cout << (found == true ? "Yes" : "No");
	return 0;
}
