#include<iostream>
using std::cin; using std::cout; using std::string;
const int specialization = 20, max_patient = 5;
string patientNames[specialization][max_patient];
bool cases[specialization][max_patient];
int count[specialization] = { 0 };
void hospitalSystem();
int readPatient();
void shiftRight(int spec, int position);
void shiftleft(int spec);
void print(int spec);
void drPick();
int main() 
{
    hospitalSystem();
    return 0;
}
void hospitalSystem()
{
    int mm;
    while (true)
    {
        int choice;
        
        cout << "\nEnter your choice\n";
        cout << "1) Add new patian\n";
        cout << "2) print all patiant\n";
        cout << "3) get next patiant\n";
        cout << "4) exit\n";
        cin >> choice;
        if (choice == 1)
        {
            mm = readPatient();
        }
        else if (choice == 2)
        {
            print(mm);
        }
        else if (choice == 3)
            drPick();
        else if (choice == 4)
            break;
        else
            cout << "you enter invalid number\n";
    }
    
}
int readPatient()
{
        int spec;
        string name;
        bool cas;
        cout << "Enter specialization (1-20):";
        cin >> spec;
        spec--;
        if (count[spec] >= 5)
        {
            cout << "apologize it's full\n";
        }
        else
        {
            cout << "Enter your name:";
            cin >> name;
            cout << "Enter status (0=regular, 1=urgent):";
            cin >> cas;
            int position = count[spec];
            patientNames[spec][position] = name;
            cases[spec][position] = cas;
            count[spec]++;
            if (cas == 1)
                shiftRight(spec, position);
            return spec;
        }
    
}
void shiftRight(int spec,int position)
{
        for (int i = position; i > 0; i--)
        {
            string temp= patientNames[spec][i-1];
            bool tmp = cases[spec][i-1];
            patientNames[spec][i - 1] = patientNames[spec][i];
            patientNames[spec][i] = temp;
            cases[spec][i - 1] = cases[spec][i];
            cases[spec][i] = tmp;
        }
}
void print(int spec)
{
    cout << "there ara " << count[spec] << " patient in specialization: " << (spec+1) << "\n";
    for (int i = 0; i < count[spec]; i++)
    {
        cout << patientNames[spec][i] << " ";
        if (cases[spec][i])
            cout << "urgent\n";
        else
            cout << "regular\n";
    }
}
void shiftleft(int spec)
{
    for (int i = 0; i < count[spec]-1; i++)
    {
        string temp = patientNames[spec][i];
        bool tmp = cases[spec][i];
        patientNames[spec][i] = patientNames[spec][i+1];
        cases[spec][i] = cases[spec][i+1];
    }
    count[spec]--;
}
void drPick()
{
    int spec;
    cout << "Enter specialization:";
    cin >> spec;
    spec--;
    if (count[spec] == 0)
        cout << "go to rest\n";
    else
    {
        cout << patientNames[spec][0] << " got with the dr\n";
        shiftleft(spec);
    }
}