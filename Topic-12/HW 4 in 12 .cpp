#include<iostream>
using namespace std;
int main()
{
	char arr[9][9];
	int n, r, c, move_count = 0;
	bool is_win = false;
	cin >> n;
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
			arr[i][j] = '.'; 
	
	for (int i = 0;i < n * n;)
	{
		char player(move_count % 2 == 0 ? 'x' : 'o');
		cout << "player " << player << endl;
		cin >> r >> c;
		if (0 <= r && r < n && 0 <= c && c < n && arr[r][c] == '.')
		{
			arr[r][c] = player;
			i++;
			for (int k = 0;k < n;k++)
			{
				for (int j = 0;j < n;j++)
					cout << arr[k][j];
				cout << endl;
			}
			move_count++;
		}
		else
		{
			cout << "Invalid input. Try again" << endl;
			continue;
		}
		for (int k = 0;k < n;k++)
		{
			if (arr[r][k] == player)
				is_win = true;
			else
			{
				is_win = false;
				break;
			}
		}
		if (is_win)
		{
			cout << "Player " << player << "Win" << endl;
			break;
		}
		for (int k = 0;k < n;k++)
		{
			if (arr[k][c] == player)
				is_win = true;
			else
			{
				is_win = false;
				break;
			}
		}
		if (is_win)
		{
			cout << "Player " << player << " Win" << endl;
			break;
		}
		for (int k = 0;k < n;k++)
		{
			if (arr[k][k] == player)
				is_win = true;
			else
			{
				is_win = false;
				break;
			}
		}
		if (is_win)
		{
			cout << "Player " << player << " Win" << endl;
			break;
		}
		for(int k=0;k<n;k++)
		{
			if (arr[k][n - 1 - k] == player)
				is_win = true;
			else
			{
				is_win = false;
				break;
			}
		}
		if (is_win)
		{
			cout << "Player " << player << " Win" << endl;
			break;
		}
		if (move_count == n * n)
			cout << "Draw" << endl;

	}
	return 0;
}
