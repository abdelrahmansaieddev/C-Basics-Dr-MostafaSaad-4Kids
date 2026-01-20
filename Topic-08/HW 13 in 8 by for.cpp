#include<iostream>
using namespace std;
int main()
{
	int testcase, num1, num2;
	cin >> testcase;
	for (int i = 0;i < testcase;i++)
	{
		cin >> num1;
		int sum = 0;
		int indx = 1;
		for (int j = 0;j < num1;j++)
		{
			cin >> num2;
			int result = num2;
			for (int q = 1; q < indx;q++)
			{
				result *= num2;
			}
			indx++;
			sum += result;
		}
		cout << sum << endl;
	}
	return 0;
}