#include<iostream>
using std::cin; using std::cout; using std::string;
string reverse_str(const string& str);
int main()
{
	cout << reverse_str("") << "\n";
	cout << reverse_str("demha") << "\n";
	cout << reverse_str("aaallliii") << "\n";
	return 0;

}
string reverse_str(const string& str)
{
	string reversedstr = str;
	int indx = 0, move = str.size() - 1;
	while (indx < move)
	{
		char temp = reversedstr[indx];
		reversedstr[indx] = reversedstr[move];
		reversedstr[move] = temp;
		indx++;
		move--;
	}
	return reversedstr;
}
