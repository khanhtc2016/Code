 #include <iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPerfectSquare(long long num) {
	
	long long temp = sqrt(num);
	if (temp * temp == num) {
		return true;
	}
	return false;
}
int main()
{
	int n;
	cin >> n;
	vector<long long> squares(n);
	for (int i = 0; i <n; ++i) {
		cin >> squares[i];
	}
	long long max = -1e9;

		for (int i = 0; i < n; ++i) {
			if(!(isPerfectSquare(squares[i]))) {
				if(squares[i] > max)
				max = squares[i];
			}
		}
		cout << max << endl;
}

