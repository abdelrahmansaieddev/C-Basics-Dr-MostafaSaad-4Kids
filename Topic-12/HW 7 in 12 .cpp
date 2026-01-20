#include<iostream>
using namespace std;
int main()
{
	int testcase, dir, steps, i = 0, j = 0;
	cin >> testcase;
	while (testcase--)
	{
		cin >> dir >> steps;
		
		if (dir == 1)
		{
			i = (i - steps + 3) % 3;
		}
		else if (dir == 2)
		{
			j = (j + steps) % 4;
		}
		else if (dir == 3)
		{
			i = (i + steps) % 3;
		}
		else if (dir == 4)
		{
			j = (j - steps + 4) % 4;
		}
		cout << "(" << i << "," << j << ")" << endl;
	}
	return 0;
}
