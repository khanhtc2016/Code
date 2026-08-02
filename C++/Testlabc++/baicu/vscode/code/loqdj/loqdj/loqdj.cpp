// loqdj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
long long mod_pow(long long a, long long b, long long m) {
	long long result = 1;
	a = a % m;
	while (b > 0) {
		if (b % 2 == 1) result = (result * a) % m;
		a = (a * a) % m;
		b /= 2;
	}
	return result;
}
using namespace std;
int main()
{
	/*int tiendien, sokw;
	cin >> tiendien >> sokw;
	int tongtien = 0;
	int kwbe = (sokw - (sokw - 100));
	if (sokw>100)
	{
		tongtien = ((sokw - 100) * (tiendien * 10 / 100)) + (kwbe * tiendien);
	}
	else if(sokw <=100)
	{
		tongtien = sokw * tiendien;
	}
	cout << tongtien;*/
	 int a=mod_pow(2, 4, 5);

	 cout << a;
}