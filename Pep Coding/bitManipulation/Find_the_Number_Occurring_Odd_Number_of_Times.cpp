#include<bits/stdc++.h>
using namespace std;


int oddNumber(int a[], int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = ans ^ a[i];
	}

	return ans;
}



int main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	int a[n];


	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << oddNumber(a, n);

	return 0;
}