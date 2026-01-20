#include<iostream>
using namespace std;
int main() 
{
	int arr[100][100], di[8] = { -1,-1,-1,0,0,1,1,1 }, dj[8] = { -1,0,1,-1,1,-1,0,1 }, row, col;
	cin >> row >> col;
	for (int i = 0;i < row;i++)
		for (int j = 0;j < col;j++)
			cin >> arr[i][j];

	for (int i = 0;i < row;i++)
	{
		
		for (int j = 0;j < col;j++)
		{
			int compare=arr[i][j];
			bool is_smaller = true;
			for (int d = 0;d < 8;d++)
			{
				int ni = i + di[d], nj = j + dj[d];
				if (ni>=0 &&nj>=0 &&ni < row && nj < col)
				{
					if (compare <= arr[ni][nj])
					{
						is_smaller = false;
						break;
					}

				}
			}
			if(is_smaller)
				cout << i << " " << j << endl;
		}
	}

	return 0;
}