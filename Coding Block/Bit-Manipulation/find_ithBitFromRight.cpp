#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	int i;
	cin >> n >> i;
	int mask = 1 << i;
	int bit = 0;
	if ((n & mask ) > 0)
		bit = 1;
	else
		bit = 0;
	cout << bit;
	return 0;
}