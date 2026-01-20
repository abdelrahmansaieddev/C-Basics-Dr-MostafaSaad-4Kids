#include <iostream> 
using namespace std; 
int main() 
{ 
	string st;
	cin >> st;
	cout << st[0];
	for (int i = 1; i < st.size(); i++)
	{
		if (st[i] == st[i - 1])
			cout << st[i];
		else
			cout << " " << st[i];
	}
	cout << endl;
	return 0;
}