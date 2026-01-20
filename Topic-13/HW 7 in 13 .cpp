#include<iostream>
#include<string>
using std::cin; using std::cout; using std::string; using std::getline;
bool starts_with(string input, string pattern, int pos);
string replace_str(string input, string pattern, string to);
int main()
{
	string Input, pattern, to;
	cin >> Input >> pattern ;
	cin.ignore();
	getline(cin, to);
	cout << replace_str(Input, pattern, to) << "\n";
	return 0;
}
bool starts_with(string input, string pattern, int pos)
{
	bool is_substring = true;
	for (int i = 0; i < pattern.size();i++ )
	{ 
		
		if (pos + i <= input.size() - 1 &&input[pos + i] == pattern[i] )
		{
			is_substring = true;
		}
		else
		{
			is_substring = false;
			break;
		}
	}
	return is_substring;
		
}
string replace_str(string input, string pattern, string to)
{
	string str = "";
	for (int i = 0; i < input.size();)
	{
		if (starts_with(input, pattern, i))
		{
			str += to;
			i += pattern.size();
		}
		else
		{
			str += input[i];
			i++;
		}
	}
	return str;
}

