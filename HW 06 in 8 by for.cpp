#include<iostream>
using namespace std;
int main()
{
	int num1, num2, indx = 1,sum_even=0,sum_odd=0,count_even=0,count_odd=0;
	cin >> num1;
	for (int i = 0;i < num1;i++)
	{
		cin >> num2;
		if (indx % 2 == 0)
		{
			sum_even += num2;
			count_even++;
		}
		else
		{
			sum_odd += num2;
			count_odd++;
		}
		indx++;
	}
	cout << sum_odd / count_odd << " " << sum_even / count_even << endl;
	return 0;
}