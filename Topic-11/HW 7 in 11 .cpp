#include <iostream>
using namespace std;

int main()
{
    string st;
    cin >> st;
    for (int i = 0;i < st.size();)
    {
        char current = st[i];
        int count = 0;
        while (i < st.size() && st[i] == current)
        {
            count++;
            i++;
        }
        cout << current << count;
        if (i < st.size())
            cout << "_";
    }
    return 0;
}