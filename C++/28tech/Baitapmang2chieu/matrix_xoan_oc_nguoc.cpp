// matrix_xoan_oc_nguoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//in ma tran theo thanh hinh xoan oc nguoc kim dong ho
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		vector<vector<int>> a(n, vector<int>(m));
		//nhap ma tran
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		vector<int> v;
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
		while (h1 <= h2 && c1 <= c2) {
			//xay dung cot dasu tien
			for (int i = c1; i <= c2; i++) {
				v.push_back(a[h1][i]);
			}
			h1++;
			//xay dung cot ben phai
			for (int i = h1; i <= h2; i++) {
				v.push_back(a[i][c2]);
			}
			c2--;
			if (h1 <= h2) {
				for (int i = c2; i >= c1; i--) {
					v.push_back(a[h2][i]);
				}
			}
			h2--;
			if (c1 <= c2) {
				for (int i = h2; i >= h1; i--) {
					v.push_back(a[i][c1]);
				}
			}
			c1++;
		}
		for (int i = size(v) - 1; i >= 0; i--) {
			cout << v[i] << " ";
		}
	}
}