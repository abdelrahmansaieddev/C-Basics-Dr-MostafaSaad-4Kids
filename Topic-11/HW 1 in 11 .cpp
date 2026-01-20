#include <iostream>
using namespace std;
int main()
{
	string st1, st2;
	cin >> st1 >> st2;
	bool is_prifx = true;
	if (st1.size() < st2.size())
	{
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0;i < st2.size();i++)
		if (st1[i] != st2[i])
		{
			is_prifx = false;
			break;
		}
	if (is_prifx)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}