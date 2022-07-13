#include <iostream>
using namespace std;

int main()
{
    int n, rowno=1;
    cin >> n;
    int spcnt = 0;
    int strcnt = n;
    while (rowno <= n)
    {
        int copy_spc=spcnt;
        while (copy_spc>0)
        {
            cout << " ";
            copy_spc--;
        }
        int copy_space = strcnt;
        while (copy_space > 0)
        {
            cout << "*"
                 << " "; 
            copy_space--;
        }
        cout << endl;
        rowno++;
        strcnt--;
        spcnt++;
    }

    return 0;
}