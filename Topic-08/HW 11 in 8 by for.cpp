#include<iostream>
using namespace std;
int main()
{
	int testcase, num1, num2;
	cin >> testcase;
	for (int i = 0;i < testcase;i++)
	{
		cin >> num1;
		int mini = 1234567899;
		for (int j = 0;j < num1;j++)
		{
			cin >> num2;
			if (num2 < mini)
				mini = num2;



		}
		cout << mini << endl;
	}
	return 0;
}