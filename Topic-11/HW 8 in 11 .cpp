#include <iostream>
using namespace std;
int main()
{
    string st1, st2;
    cin >> st1 >> st2;
    int count = 0, min = st1.size();
    if (min > st2.size())
        min = st2.size();
    for (int i = 0;i < min;i++)
    {
        if (st1[i] < st2[i])
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (st1.size() <= st2.size())
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}