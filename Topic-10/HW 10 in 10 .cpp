#include <iostream>
using namespace std;
int main()
{
	int k, n, arr[200],max=INT_MIN,start_indx,end_indx;
	cin >> k >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	for (int i = 0;i <= n - k;i++)
	{
		int sum = 0;
		for (int j = 0;j < k;j++)
			sum += arr[i + j];
		if (sum > max)
		{
			max = sum;
			start_indx = i;
			end_indx = i + k-1;
		}
	}
	cout << start_indx<<" "<<end_indx << " " << max << endl;
	return 0;
}