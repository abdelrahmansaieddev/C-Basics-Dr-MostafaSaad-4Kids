#include<iostream>
using namespace std;
int main()
{
	int num1;
	cin >> num1;
	string txt;
	for (int i = 0;i < num1;i++)
	{
		cin >> txt;
		if (txt == "NO" || txt == "no" || txt == "nO" || txt == "No" || txt == "ON" || txt == "on" || txt == "On" || txt == "oN")
			cout << txt << " ";
	}
	return 0;
}