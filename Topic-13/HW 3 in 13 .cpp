#include<iostream>
using std::cin; using std::cout; using std::string;
void calculator();
int menu();
void read(double& num1, double& num2);
void addnum(double num1, double num2);
void subtractnum(double num1, double num2);
void multiplynum(double num1, double num2);
void dividenum(double num1, double num2);
int main()
{
	calculator();
	return 0;
}
void calculator()
{
	int count = 0;
	while (true)
	{
		int choice = menu();
		double num1, num2;
		read(num1, num2);
		if (choice == 1)
			addnum(num1, num2);
		else if (choice == 2)
			subtractnum(num1, num2);
		else if (choice == 3)
			multiplynum(num1, num2);
		else if (choice == 4)
			dividenum(num1, num2);
		else
		{
			cout << "operations were done: " << count << "\n";
			break;
		}
		count++;
	}

}
int menu()
{
	int choice = -1;
	while (choice == -1)
	{
		cout << "1) add 2 number\n";
		cout << "2) subtract 2 number\n";
		cout << "3) multiply 2 number\n";
		cout << "4) divide 2 number\n";
		cout << "5) exsit\n";
		cin >> choice;
		if (choice >= 1 && choice <= 5)
			return choice;
		cout << "you enter invalid number\n";
			choice = -1;
	}
}
void read(double& num1, double& num2)
{
	cout << "Enter 2 number\n";
	cin >> num1 >> num2;
}
void addnum(double num1, double num2)
{
	cout << num1 + num2 << "\n";
}
void subtractnum(double num1, double num2)
{
	cout << num1 - num2 << "\n";
}
void multiplynum(double num1, double num2)
{
	cout << num1 * num2 << "\n";
}
void dividenum(double num1, double num2)
{
	if (num2 != 0)
		cout << num1 / num2 << "\n";
	else
		cout << "Invalid operation, can't divide in 0\n";
}
