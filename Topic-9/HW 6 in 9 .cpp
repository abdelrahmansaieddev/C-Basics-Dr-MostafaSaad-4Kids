	#include<iostream>
	using namespace std;

	int main() {
		int num1, num2, num3,newnum,fsum=0;
		cin >> num1 >> num2 >> num3;//20 2 5
		for (int i = 1;i <= num1;i++)
		{
			int temp = i;
			int digit=0;
			int sum = 0;
			for (int temp = i; temp > 0; temp /= 10) {
				sum += temp % 10;
			}
			temp = i;
			if (num2 <= sum && sum <= num3 || num3 <= sum && sum <= num2)
			{
				fsum += temp;
			}
		}
		cout << fsum << endl;
		return 0;
	}