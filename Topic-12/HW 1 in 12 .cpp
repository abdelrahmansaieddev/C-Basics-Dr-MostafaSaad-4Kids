#include<iostream>
using namespace std;
int main() 
{
	int arr[100][100], row, col, Q, row1,row2;
	cin >> row >> col;
	for (int i = 0;i < row;i++)
		for (int j = 0;j < col;j++)
			cin >> arr[i][j];
	cin >> Q;
	for (int i = 0;i < Q;i++)
	{
		cin >> row1 >> row2;
		bool is_biger = true;
		for (int j = 0;j < col;j++)
		{
			if (arr[row1-1][j] > arr[row2-1][j])
			{
				is_biger = false;
				break;
			}
		}
		if (is_biger)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	
	return 0;
}