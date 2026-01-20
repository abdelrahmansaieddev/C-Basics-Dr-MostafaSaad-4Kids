#include<iostream>
using namespace std;

int main() {
	int arr[200], n;
	cin >> n;
	//cin >> arr[0];
	int min1 = 1234567899, min2 = 1234567899, min3 = 1234567899;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (min1 > arr[i])
			min3 = min2, min2 = min1,min1 = arr[i];
		else if (min2 > arr[i])
			min3=min2,min2 = arr[i];
		else if (min3 > arr[i])
			min3 = arr[i];
	}
	cout << min1 << " " << min2 << " " << min3 << "\n";
	return 0;
}
