#include<bits/stdc++.h>
using namespace std;

int  subarraySum(int arr[], int n, int sum)
{
	unordered_map<int , int> map;

	int cur_sum = 0;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		cur_sum = cur_sum + arr[i];

		if (cur_sum == sum )
		{
			// cout << "0" << "  " << i << endl;
			// return;
			count++;
		}


		if (map.find(cur_sum - sum ) != map.end())
		{
			// cout << map[cur_sum - sum ] + 1 << "  " << i << endl;
			// return;
			count++;
		}

		map[cur_sum] = i;
	}

	return count;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	int n ;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum;
	cin >> sum;
	cout << subarraySum(arr, n, sum);



}