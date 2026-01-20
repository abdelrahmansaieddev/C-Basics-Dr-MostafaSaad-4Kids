#include <iostream>
using namespace std;
int main()
{
	string st1, st2;
	cin >> st1 >> st2;
	for (int i = 0;i < st1.size();i++)
	{
		string check = "";
		int count = 0;
		for (int j = i;j < st1.size();j++)
		{
			check += st1[j];
			count++;
			if (count == st2.size())
				break;
		}
		if (check == st2)
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}