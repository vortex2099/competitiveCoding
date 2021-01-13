#include<bits/stdc++.h>
using namespace std;


int copySetBit(int x, int y, int l, int r) {

	int mask = 0;

	for (int i = 0; i < ((r - l) + 1); i++) {
		mask = mask << 1;
		mask = mask + 1;
	}

	mask = mask << (l - 1);

	mask = y & mask;

	int ans = x | mask;

	return ans;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	int x, y, l, r;
	cin >> x >> y >> l >> r;

	cout << copySetBit(x, y, l, r);




	return 0;
}