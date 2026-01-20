#include<iostream>
using namespace std;

int main() {
	int n, arr[200];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	bool is_increase = true;
	for (int i = n - 1; i > 0; i--)
		if (arr[i] < arr[i - 1])
		{
			is_increase = false;
			break;
		}
	if (is_increase)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
