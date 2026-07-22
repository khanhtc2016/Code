
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s; cin >> s;
	int cnt[26] = { 0 };
	for (char c:s)
	{
		cnt[c - 'a']++;
	}
	int odd = 0;
	for (int i = 0; i < 26; i++)
	{
		if (cnt[i]%2==1)
		{
			++odd;
		}
	}
	cout << max(0, odd - 1) << endl;


}

