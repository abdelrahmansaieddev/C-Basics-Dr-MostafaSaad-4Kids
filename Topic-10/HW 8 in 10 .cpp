#include <iostream>
using namespace std;
int main()
{
	int n, arr[200], freq[10] = { 0 };
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		int digit=0;
		while (arr[i] > 0)
		{
			digit = arr[i] % 10;
			freq[digit]++;
			arr[i]=arr[i] / 10;
		}
		
	}
	for (int j = 0;j < 10;j++)
		cout << j <<" "<< freq[j] << endl;
}