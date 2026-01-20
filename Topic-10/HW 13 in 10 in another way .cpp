#include <iostream>
using namespace std;
int main()
{
	int n, arr[1000],max=INT_MIN,sum=0;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	
	for (int i = 0;i < n;i++)
	{
		
		for (int j = i;j < n;j++)
		{
			int one_count = 0, zero_count = 0;
			for(int k=i;k<=j;k++)
			
			{
				if (arr[k] == 1)
					one_count++;
				else
					zero_count++;
				if (one_count == zero_count)
				{
					sum = one_count + zero_count;
				}
				
			}
			
				if (max < sum)
					max = sum;

			
			
		}
		
	}
	cout << max << endl;
	return 0;
}
