#include <iostream>
using namespace std;
int max1(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int i = 4;
    int res = -1001;
    int a;
    while (i--) {
        cin >> a;
		res = max1(res, a);
    }
	cout << res << endl;
}
