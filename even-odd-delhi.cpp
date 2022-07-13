#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        int even = 0, odd = 0;
        while (no > 0)
        {
            int ld = no % 10;
            if (ld % 2 == 0)
            {
                even += ld;
            }
            else
            {
                odd += ld;
            }
            no = no / 10;
        }
        
        if (even % 4 == 0)
        {
            cout << "Yes" << endl;
        }
        else if (odd % 3 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}