#include <iostream>
using namespace std;
int main()
{
	int n, k, arr[200],indx=0;
	cin >> n >> k;
	for (int i = 1;i <= n;i++)
		arr[i - 1] = i;
	for (int i = 0;i < n;i++)
	{
		int count = 0;
		while (count < k)
		{
			if (arr[indx] != 0)
				count++;
			if (count == k)
			{
				cout << arr[indx] << " ";
				arr[indx] = 0;
			}
			indx = (indx + 1) % n;
		}

	}
	return 0;
}
