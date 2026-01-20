#include <iostream> 
using namespace std; 
int main() 
{ string st1, st2; 
cin >> st1 >> st2;
bool is_suffix = true;
int temp = 0; 
if (st1.size() < st2.size()) 
{ 
	cout << "NO" << endl;
	return 0; 
} 
for (int i = st2.size() - 1;i >= 0;i--) 
{
	if (st1[st1.size() - 1 - temp] != st2[i])
	{
		is_suffix = false; break;
	} temp++;
} 
if (is_suffix)
cout << "YES" << endl; 
else 
cout << "NO" << endl;
return 0;
}