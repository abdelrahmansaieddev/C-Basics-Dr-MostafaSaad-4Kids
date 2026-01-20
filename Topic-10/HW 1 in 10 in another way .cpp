#include<iostream>
using namespace std;

int main() {
	int arr1[200], arr2[200],freq[501], n, q;
	cin >> n;
	for (int i = 0;i < 501;i++)
		freq[i] = -1;
	for (int i = 0;i < n;i++)
	{
		cin >> arr1[i];
		freq[arr1[i]] = i;
	}
	cin >> q;
	for (int i = 0;i < q;i++)
		cin >> arr2[i];
	for (int i = 0;i < q;i++)
	{
		cout << freq[arr2[i]] << endl;
	}
	return 0;
}
