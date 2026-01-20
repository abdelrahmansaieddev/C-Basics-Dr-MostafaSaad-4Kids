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
	for (int i = 0; i < str.size(); i++)
		reversedstr[i] = str[str.size() - 1 - i];
	return reversedstr;
}
