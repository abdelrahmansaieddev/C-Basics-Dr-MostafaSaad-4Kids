#include<iostream>
using namespace std;
int main() 
{
	int arr[100][100],N, sum = 0;
	cin >> N;
	for (int i = 0;i < N;i++)
		for (int j = 0;j < N;j++)
			cin >> arr[i][j];
	//sum of digonal
	for (int i = 0;i < N;i++)
		sum += arr[i][i];
	int upper = sum, lower = sum;
	//sum of upper
	for (int i = 0;i < N;i++)
	{
		for (int j = i + 1;j < N;j++)
		{
			upper += arr[i][j];
		}
			
	}
	//sum of lower
	for (int i = 0;i < N;i++)
	{
		for (int j = i - 1;j >= 0;j--)
		{
			lower += arr[i][j];
		}
	}
	cout << upper << endl;
	cout << lower << endl;
	return 0;
}