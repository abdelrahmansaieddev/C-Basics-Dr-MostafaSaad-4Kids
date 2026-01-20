#include <iostream>
using namespace std;
int main()
{
	int n, arr[200];
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	int len = 1, result = 0;
	for (int i = 1;i < n;i++)
	{
		if (arr[i] > arr[i - 1])
		{
			result += len;
			len++;
		}
		else
			len = 1;
	}
	cout << result+n << endl;
	return 0;
}