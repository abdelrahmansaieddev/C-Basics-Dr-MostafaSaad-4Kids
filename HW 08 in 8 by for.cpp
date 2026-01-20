#include<iostream>
using namespace std;
int main()
{
	int num1,count=0;
	cin >> num1;
	for (int i = 0;count < num1;i++)
	{
		if (i % 3 == 0 && i % 4 != 0)
		{
			cout << i << " ";
			count++;
		}
		
	}
	return 0;
}