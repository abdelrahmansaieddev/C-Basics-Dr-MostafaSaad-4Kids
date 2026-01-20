#include<iostream>
using std::cin; using std::cout; using std::string;
int power(int num, int p);
void setPowers(int arr[], int len = 5, int m = 2);
void printArray(const int arr[], int size);
int main()
{
	int arr[1000], size;
	cin >> size;
	setPowers(arr, size);
	printArray(arr, size);
	return 0;
}
int power(int num, int p)
{
	int result = 1;
	for (int i = 0; i < p; i++)
		result *= num;
	return result;
}
void setPowers(int arr[], int len, int m )
{
	for (int i = 0; i < len; i++)
		arr[i] = power(m, i);
}
void printArray(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i]<<" ";
	cout << "\n";
}