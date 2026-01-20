#include<iostream>
using namespace std;
int main()
{
	int num,num_space=0,indx=1;
	cin >> num;
	num_space = num;
	for (int i = 0;i < num;i++)
	{
		for (int j = 1;j < num_space;j++)
			cout << ' ';
		for (int q = 1;q <= indx;q++)
			cout << '*';
		indx =indx+2;
		num_space--;
		cout << endl;
	}
	//الفكره الي  جاتلي عشان اعرف اظبطه هي 
	// ان اخر حاجه ختمت بيها في النص الي فوق هي اول حاجه ابد بيها ف النص الي تحت عشان اطلع نفس الناتج
	num_space = 1;
	for (int i = 0;i < num;i++)
	{
		indx = indx -  2;
		for (int j = 1;j < num_space;j++)
			cout << ' ';
		for (int q = 1;q <= indx;q++)
			cout << '*';		
		cout << endl;
		num_space++;
		
		
	}
	return 0;
}