#include<iostream>
using std::cin; using std::cout; using std::string;
void checkPalindrome(int arr[], int size);
int main()
{
	int arr[1000], n;
	cin >> n;
	checkPalindrome(arr, n);
	return 0;
}
void checkPalindrome( int arr[], int size)
{
	bool is_Palindrome = true;
	cout << "Enter " << size << " elements:\n";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	for (int i = 0; i < size/2; i++)
	{
		if (arr[i] != arr[size - 1 - i])
		{
			is_Palindrome = false;
			break;
		}
	}
	if (is_Palindrome)
		cout << "Palindrome\n";
	else
		cout << "Not\n";
}
