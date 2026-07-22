
#include "bits/stdc++.h"

int main()
{
    (void)_setmode(_fileno(stdout), _O_U8TEXT);
	char a; cin >> a;
	if (a== 'a'||a=='e' || a == 'i' || a == 'o' || a == 'u')
	{
		wcout << L"ch là nguyên âm";
	}
	wcout << endl;
	int n;
	cin >> n;
	if (n%2==0)
	{
		wcout << L"chẵn";
	}
	else
	{
		wcout << L"lẻ";
	}

}
