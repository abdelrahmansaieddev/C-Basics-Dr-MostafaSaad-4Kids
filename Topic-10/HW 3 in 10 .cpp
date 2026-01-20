#include<iostream>
using namespace std;

int main() {
	int arr[200],n,max,min;
	cin >> n;
	cin >> arr[0];
	max = arr[0], min = arr[0];
	for(int i=1;i<n;i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}
	for (int i = 0;i < n;i++)
	{
		if (arr[i] == max)
			arr[i] = min;
		else if (arr[i] == min)
			arr[i] = max;
	}
	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";
	return 0;
}
