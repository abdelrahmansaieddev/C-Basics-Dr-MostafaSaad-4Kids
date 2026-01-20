#include<iostream>
using namespace std;

int main() {
	int count=0;
	for (int i = 1; i <= 200; i++) 
		for (int j = 1; j <= 200; j++)
			for (int k = 1; k <= 200; k++) 
				for (int l = 1; l <= 200; l++)
					if(i+j==k+l)
					count++;
	cout << count << endl;

	return 0;
}
