#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int count = 0;
	for(int j=2;j<=num;j++)
	{
		bool is_prime = true;
		for (int i = 2;i < j;i++)
			if (j % i == 0) {
				is_prime = false;
			}
		if (is_prime && j > 1)
		{
			if (count > 0)
				cout << ",";
			cout << j;
			count++;
			
		}
			
	}
	return 0;
}