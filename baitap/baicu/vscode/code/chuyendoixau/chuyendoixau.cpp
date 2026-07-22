#include<iostream>
using namespace std;
int main() {
    char s[100];
    cin.getline(s, 100);
	for (int i = 0; i < strlen(s); i++)
	{
		if ('a'<=s[i] && s[i]<='z')
		{
			s[i] -= 32;
		}
		else if (s[i]>='A' && s[i]<='Z')
		{
			s[i] += 32;
		}
	}
	cout << s;


}
