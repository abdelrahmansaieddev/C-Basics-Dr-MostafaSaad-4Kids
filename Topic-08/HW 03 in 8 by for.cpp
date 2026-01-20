#include<iostream>
using namespace std;
int main()
{
	int num,indx=1;
	cin >> num;
	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < indx;j++)
			cout << '*';
		indx++;
		cout << endl;
	}

	return 0;
}