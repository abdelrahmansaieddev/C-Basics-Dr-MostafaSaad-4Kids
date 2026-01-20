#include<iostream>
using namespace std;
int main()
{
	int matrix[4][5] = {{1,2,3,4,5}
					    ,{6,7,8,9,10}
					    ,{11,12,13,14,15}
					    ,{16,17,18,19,20} };
	int Transposematrix[5][4];
	for (int j = 0;j < 5;j++)
		for (int i = 0;i < 4;i++)
			Transposematrix[j][i] = matrix[i][j];
	for (int j = 0;j < 5;j++)
	{
		for (int i = 0;i < 4;i++)
			cout << Transposematrix[j][i]<<"";
		cout << endl;
	}
	
	return 0;
}
