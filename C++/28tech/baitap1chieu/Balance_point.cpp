#include<vector>
#include <iostream>
using namespace std;

int main()
{
	int test_cases; cin >> test_cases;
	while (test_cases--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int sum = 0;// sum of all elements in the array
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
		}
		//then use sum-a[i] to get sum of right elements and use left_sum to get sum of left elements
		//after that we can compare left_sum and right_sum to check if the current index is a balance point or not
		int left = 0;
		for ( int i = 0; i <n; i++)
		{
			sum -= a[i];
			if (left == sum)
			{
				cout << i << endl;
				break;
			}
			left += a[i];
			if (i==n-1)
			{
				cout << 0 << endl;
			}
		}


	}
	//done 100 points
} 

