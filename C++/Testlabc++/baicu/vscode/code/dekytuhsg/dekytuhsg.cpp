#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char s[256];
	cin.getline(s, 256);
	int cs[256];
	memset(cs, 0, sizeof(cs));
	for (int i = 0; i < (int)strlen(s); i++)
	{
		cs[int(s[i])]++;
	}
	int count = 0;
	for (int i = 0; i <= 255;i++)
	{
		if (cs[i]==1)
		{
			count++;
		}
	
	}
	cout << count;
}