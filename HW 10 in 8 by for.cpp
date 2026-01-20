#include<iostream>
using namespace std;
int main()
{
	int num1,newnum=0;
	cin >> num1;
	for (int i = num1;i > 0;i--)
	{
		if (num1 > 0)
		{
			newnum = newnum * 10 + num1 % 10;
			num1 = num1 / 10;
		}
	}
	cout << newnum << " " << newnum * 3 << endl;
	return 0;
}