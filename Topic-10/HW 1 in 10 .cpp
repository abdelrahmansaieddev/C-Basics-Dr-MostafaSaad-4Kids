#include<iostream>
using namespace std;

int main() {
	int arr1[200], arr2[200],n,q;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr1[i];
	cin >> q;
	for (int i = 0;i < q;i++)
		cin >> arr2[i];
	for (int i = 0;i < q;i++)
	{
		int max_indx = -1;
		for (int j = 0;j < n;j++)
		{
			if (arr2[i] == arr1[j])
				if (j > max_indx)
					max_indx = j;
		}
		cout << max_indx << "\n";
	}
	return 0;
}
