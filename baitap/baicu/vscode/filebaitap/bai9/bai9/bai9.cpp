
#include "bits/stdc++.h"

int main()
{
	(void)_setmode(_fileno(stdout), _O_U8TEXT);
	int m;
	cin >> m;
	if (m%3==0 || m % 5 == 0)
	{
		wcout << L"m chia hết cho 3 hoặc 5";
	}
}
