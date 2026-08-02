

#include "bits/stdc++.h"
#define ll long long
int main()
{

	/*ll m, n, p;
	cin >> m >> n >> p;
	ll sum = (m + n + p);
	cout << sum;*/

	/*char hoten[20];

	cin.getline(hoten, 20);
	ll tuoi;
	cin >> tuoi;
	cout << "ban " << hoten << " " << tuoi;
*/


		/*int tiendien, sokw;
		cin >> tiendien >> sokw;
		int tongtien;
		if (sokw>100)
		{
			tongtien =(tiendien*100)+((sokw-100)*(tiendien*0.1));
		}
		else
		{
			tongtien = sokw * tiendien;
		}
		cout << tongtien;*/
	int n;
	cin >> n;
	/*
	int sumn = 0;
	sumn += (n / 2) * (n + 1);
	cout << sumn;*/
	int sum2 = 0;
	for (int i = 2; i < 2*n; i++)
	{
		if (i%2==0)
		{
			sum2 += i;
		}
	}
	int sum3 = 0;
	for (int i = 1; i < 2*n+1; i++)
	{
		if (i%2!=0)
		{
			sum3 += i;
		}
	}
	
	int tongphuong = ((0.25) * pow(n,2))*pow(n+1,2);
	cout << tongphuong << endl;
	tongphuong = 0;
	for (int i = 1; i <=  n; i++)
	{
		
		tongphuong += i * i * i;
	}
	cout << tongphuong;
}

