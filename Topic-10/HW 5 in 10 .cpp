#include<iostream>
using namespace std;

int main() {

	int n, arr[200], min = INT_MAX;

	cin >> n;

	for (int i = 0; i < n; i++)

		cin >> arr[i];

	for (int i = 1;i < n;i++)

	{

		for (int j = i + 1;j <= n;j++)

		{

			if (min > arr[i - 1] + arr[j - 1] + j - i)

				min = arr[i - 1] + arr[j - 1] + j - i;

		}

	}

	cout << min << endl;

	return 0;

}

