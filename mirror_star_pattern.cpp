/*
      *
    * * *
  * * * * *
    * * *
      *

                        */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rowno = 1;

    int starcount = 1;
    int space = n/2;
    while (rowno <= (n / 2) + 1)
    {

        int spacecount = 1;
        while (spacecount <= space)
        {
            cout << " "
                 << " ";
            spacecount++;
        }
        int copy_star = starcount;
        while (copy_star > 0)
        {
            cout << "*"
                 << " ";
            copy_star--;
        }
        cout << endl;
        rowno++;
        space--;
        starcount += 2;
    }
    // upper half complete
    int spc1 = 1;
    int starcnt = n - 2;
    while (rowno <= n)
    {
        int spacecnt = spc1;
        while (spacecnt > 0)
        {
            cout << " "
                 << " ";
            spacecnt--;
        }
        int copy_star = starcnt;
        while (copy_star > 0)
        {
            cout << "*"
                 << " ";
            copy_star--;
        }
        cout << endl;
        rowno++;
        starcnt -= 2;
        spc1++;
    }

    return 0;
}