#include<iostream>
using namespace std;

int main() {
	int n, arr[200];
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	bool is_palindrome = true;
	for (int i = 0;i < n/2;i++)
	{
		if(arr[i]!=arr[n-i-1])
		{
			is_palindrome = false;
			break;
		}
	}
	if (is_palindrome)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}