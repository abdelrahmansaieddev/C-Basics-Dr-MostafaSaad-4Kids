#include<iostream>
using namespace std;
int main()
{
	int layer, row, col, num, d, r, c, indx;
	while (cin>>layer>>row>>col)
	{
		cin >> num;
		if (num == 1)
		{
			cin >> d >> r >> c;
			int convertindx = d * row * col + r * col + c;
			cout << convertindx << endl;

		}
		else if (num == 2)
		{
			cin >> indx;
			int newd = indx / (row * col);
			int reminder = indx % (row * col);
			int newr = reminder / col;
			int newc = reminder % col;
			cout << newd << " " << newr << " " << newc << " " << endl;
		}
	}

	return 0;
}
