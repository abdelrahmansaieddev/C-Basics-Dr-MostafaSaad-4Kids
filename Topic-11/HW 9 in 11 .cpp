#include <iostream>
using namespace std;

int main()
{
    string st,num;
    cin >> st >> num;
    int carry = 0;
    int indx = num.size() ;
    for (int i = st.size() - 1;i >= 0;i--)
    {
        if (--indx >= 0)
        {
            int digit = (st[i] - '0') + (num[indx] - '0') + carry;
            st[i] = (digit % 10) + '0';
            carry = digit / 10;
        }
        else
        {
            if (carry > 0)
            {
                int digit = (st[i] - '0') + carry;
                st[i] = digit % 10 + '0';
                carry = digit / 10;
            }
            else
                break;
        }

    }
    if (carry >0)
        cout << "1" << st << endl;
    else
        cout << st << endl;
    return 0;
}
