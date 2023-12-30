#include<bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{

	int sum = 0;
	int left_sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}

	for (int i = 0; i < n; i++) {

		sum = sum - arr[i];

		if (left_sum == sum)
			return i;
		//vivek singh rana

		left_sum = left_sum + arr[i];
	}

	return -1;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << equilibrium(arr, n);
	return 0;
}
