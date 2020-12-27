#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i, j;
	cin >> n >> j >> i;

	int mask;
	int a = -1 << (i + 1);
	int b = (1 << j) - 1;
	mask = a | b;
	int ans = n & mask;
	cout << ans;
	return 0;

}