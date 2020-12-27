#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	const unsigned int M = 1000000007;
	int arr[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int asize = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + asize);
	long long int sum = 0;
	for (int i = 1; i < n; ) {
		sum = sum + arr[i];
		i = i + 4;
	}
	sum = sum % M;
	cout << sum;
}