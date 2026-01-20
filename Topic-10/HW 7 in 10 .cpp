#include <iostream>
using namespace std;
int main()
{
	int n, arr[200], freq[771]={0}, max = INT_MIN,mostvaluefreq,indx;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		indx = arr[i] + 500;
		freq[indx]++;
		if (freq[indx] > max)
		{
			max = freq[indx];
			mostvaluefreq = arr[i];
		}

		
	}
	cout << mostvaluefreq <<" repeated "<< max <<" times " << endl;
}