#include<iostream>
using std::cin;using std::cout;using std::string;
const int size = 100;
string name[size];
int age[size];
int salary[size];
char gender[size];
int countEmployee = 0;
void employeeProgram();
int menu();
void addNewEmployee();
void printAllEmployee();
void deleteByAge();
void updateSalaryByName();
int main()
{
	employeeProgram();
	return 0;
}
void employeeProgram()
{
	while (true)
	{
		int choose = menu();
		if (choose == 1)
			addNewEmployee();
		else if (choose == 2)
			printAllEmployee();
		else if (choose == 3)
			deleteByAge();
		else if (choose == 4)
			updateSalaryByName();
		else
			break;
	}
}
int menu()
{
	int choice = 0;
	while (choice == 0)
	{
		cout << "\nEnter your choice: \n";
		cout << "1) Add new employee \n";
		cout << "2) print all employee \n";
		cout << "3) delete by age \n";
		cout << "4) update salary by name \n";
		cout << "5) Exist \n";
		cin >> choice;
		if (!(choice >= 1 && choice <= 5)) {
			{
				cout << "Invalid choice try again \n";
				choice = 0;
			}
		}
		return choice;
	}
	
}
void addNewEmployee()
{
	cout << "Enter name: ";
	cin >> name[countEmployee];
	cout << "Enter age: ";
	cin >> age[countEmployee];
	cout << "Enter salary: ";
	cin >> salary[countEmployee];
	cout << "Enter gender: ";
	cin >> gender[countEmployee];
	countEmployee++;

}
void printAllEmployee()
{
	for (int i = 0;i < countEmployee;i++)
		cout << name[i] << " " << age[i] << " " << salary[i] << " " << gender[i]<<"\n";

}
void deleteByAge()
{
	cout << "Enter start and end age ";
	int start, end;
	cin >> start >> end;
	for (int i = 0; i < countEmployee;)
	{
		if (age[i] >= start && age[i] <= end)
		{
			for (int j = i; j < countEmployee; j++)
			{
				name[j] = name[j + 1];
				age[j] = age[j + 1];
				salary[j] = salary[j + 1];
				gender[j] = gender[j + 1];
			}
			countEmployee--;
		}
		else
			i++;
	}
}
void updateSalaryByName()
{
	cout << "Enter the name and salary ";
	string n;
	int s;
	bool is_found = true;
	while(is_found)
	{
		cin >> n >> s;
		for (int i = 0; i < countEmployee; i++)
		{
			if (name[i] == n)
			{
				salary[i] = s;
				is_found = false;
				break;
			}
			else
			{
				is_found = true;
				cout << "the name dosen't exist try again \n";
			}

		}
	}

}