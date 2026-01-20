#include <iostream>
using namespace std;
int main()
{
	int n, arr[200], count = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	for (int i = 0;i < n;i++)
	{
		for (int j = i; j < n;j++)
		{
			for (int k = i+1;k <= j;k++)
			{
				bool is_ok = true;
				if (arr[k] < arr[k-1])
				{
					is_ok = false;
					break;
				}
				if(is_ok)
					count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}