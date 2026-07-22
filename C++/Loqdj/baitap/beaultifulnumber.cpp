#include <iostream>
using namespace std;
long long n; 
long long beautifulnumber(long long n) {
	
	while (n>=10){
		long long sum = 0;
		while (n>0)
		{
			sum += n % 10;
			n /= 10;
		}
		n = sum;
	}
	return n;
	
}
int main()
{
	cin >> n;
	cout << beautifulnumber(n);

}

