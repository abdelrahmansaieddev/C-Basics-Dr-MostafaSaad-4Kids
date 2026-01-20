#include <iostream>
using namespace std;
int main()
{
	int n, arr[200]={0}, freq[201] = {0}, sum = 0;
	cin >> n;
	arr[0] = 0;
	freq[arr[0]] = 1;
	for (int i = 1;i <= n;i++)
	{
		sum = arr[i - 1] - (i - 1) - 1;
		if (sum >= 0)
		{
			if (freq[sum] == 0)
			{
				
				arr[i] = arr[i - 1] - (i - 1) - 1;
				freq[arr[i]]++;
			}
			else
			{
				arr[i] = arr[i - 1] + (i - 1) + 1;
				freq[arr[i]]++;
			}
		}
		else
		{
			arr[i] = arr[i - 1] + (i - 1) + 1;
			freq[arr[i]]++;
		}
	}
	cout << arr[n] << endl;
}