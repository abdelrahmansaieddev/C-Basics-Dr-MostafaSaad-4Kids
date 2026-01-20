#include<iostream>
using namespace std;
int main()
{
	int num1;
	cin >> num1;
	for (int i = 0;i < num1;i++)
	{
		if (i % 8 == 0 || (i % 3 == 0 && i % 4 == 0))
			cout << i << " ";
	}
	return 0;
}