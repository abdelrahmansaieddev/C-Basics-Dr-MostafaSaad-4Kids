#include <iostream>
using namespace std;
int main()
{
    string name[50],searchbyname;
    int salary[50], age[50];
    char gender[50];
    int n, count = 0, start_age = 0, end_age = 0,new_salary=0;
    while (true)
    {
        cout << "Enter your choice:" << endl;
        cout << " 1) Add new employees" << endl;
        cout << " 2) print all employees" << endl;
        cout << " 3) Delete by age " << endl;
        cout << " 4) Update salary by name" << endl;
        cout << " 0) to exit" << endl;
        cin >> n;
        if (n == 1)
        {
           if(count < 50)
            {
                cout << "Enter name: ";
                cin >> name[count];
                cout << "Enter age: ";
                cin >> age[count];
                cout << "Enter salry: ";
                cin >> salary[count];
                cout << "Enter gender(M/F): ";
                cin >> gender[count];
                cout << endl;
                count++;
            }
           
        }
        else if (n == 2)
        {
            for (int j = 0;j < count;j++)
            {
                cout << name[j] << " " << age[j] << " " << salary[j] << " " << gender[j] << endl;
            }
            cout << endl;
        }
        else if (n == 3)
        {
            cout << "Enter start and end age " << endl;
            cin >> start_age >> end_age;
            for (int j = 0;j < count;)
            {
                if (age[j] >= start_age && age[j] <= end_age)
                {
                    if (j == count - 1)
                        count--;
                    else
                    {
                        for (int k = j;k + 1 < count;k++)
                        {
                            name[k] = name[k + 1];
                            age[k] = age[k + 1];
                            salary[k] = salary[k + 1];
                            gender[k] = gender[k + 1];
                        }
                        count--;
                    }
                }
                else
                    j++;
            }
        }
        else if (n == 4)
        {
            cout << "Enter the name and salary ";
            cin >> searchbyname >> new_salary;
            for (int j = 0;j < count;j++)
            {
                if (name[j] == searchbyname)
                    salary[j] = new_salary;
            }
        }
        else if (n == 0)
            return 0;
    }
    return 0;
}
