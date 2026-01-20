#include <iostream> 
using namespace std; 
int main() 
{ 
	string st1, st2;
	cin >> st1 >> st2;
	if (st1.size() < st2.size())
	{
		cout << "NO" << endl;
		return 0;
	}
	int j = 0;
	for (int i = 0;i < st1.size();i++)
	{
		if (j<st2.size()&&st1[i] == st2[j])
			j++;
	}
	if (j == st2.size())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}