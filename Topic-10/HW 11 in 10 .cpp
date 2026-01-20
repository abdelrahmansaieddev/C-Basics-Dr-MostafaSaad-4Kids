#include <iostream>
using namespace std;
int main()
{
	int n, arr[200];
	cin >> n;
	count = n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	for (int i = 0;i < n;i++)
	{
		bool is_ok = true;
		for (int j = i; j < n-1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				is_ok = false;
				break;
			}
			if (is_ok)
				count++;
		}
		
	}
	cout << count << endl;
	return 0;
}