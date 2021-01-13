#include<bits/stdc++.h>
using namespace std;

int setBitPosition(int n)
{
	int pos = 0;
	int count = 0;
	while (n > 0) {
		if ((n & 1) == 1)
		{
			count++;
		}
		if (count > 1)
			return 0;
		pos++;
		n = n >> 1;
	}
	return pos;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << setBitPosition(n);
	return 0;
}