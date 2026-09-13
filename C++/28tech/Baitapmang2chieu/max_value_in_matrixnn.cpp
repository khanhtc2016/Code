// max_value_in_matrixnn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//input: matrix of size n*n + (-1000<= a[i][j] <= 1000)
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 
int majoy[402][402], minor[402][402];
int main()
{
	//input
    int n; cin >> n;
	vector<vector<ll>> a(n+1, vector<ll>(n+1));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	//build majoy
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			//majoy with majoy[i][j]+a[i-1][j-1]
			if (i == 1 || j == 1) majoy[i][j] = a[i][j];
			else majoy[i][j] = majoy[i - 1][j - 1] + a[i][j];

		}
	}
	//build minor
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > 0; j--) {
			if (i == 1 || j == n) minor[i][j] = a[i][j];
			else minor[i][j] = minor[i - 1][j + 1] + a[i][j];
		}
	}



	return 0;
}

