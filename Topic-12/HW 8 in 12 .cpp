#include<iostream>
using namespace std;
int main()
{
	int matrix[3][4] = { {8,2,9,5},
		                 {3,2,27,6},
		                 {7,8,29,22} };
	int testcase, indxi, indxj, numrow, numcol;
	cin >> testcase;
	while (testcase--)
	{
		cin >> indxi >> indxj >> numrow >> numcol;
		int countrow = 0;
		bool is_prime = true;
		int primecount = 0;
		for (int i = indxi;countrow < numrow;i++)
		{
			int countcol = 0;
			for (int j = indxj;countcol < numcol;j++)
			{
				for(int k=2;k*k<=matrix[i][j];k++)
				{
					if (matrix[i][j] % k == 0)
						is_prime = false;
				}
				if (is_prime)
					primecount++;
				is_prime = true;
				countcol++;
			}
			countrow++;
		}
		cout <<primecount<<endl;
	}
	return 0;
}
