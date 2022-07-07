/*
      Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
     
constraints= 0 < N < 10 (where N is an odd number)                                       */

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    
    if (n > 0 && n < 10)
    {
		if (n == 1)
    {
        cout << "*";
        return 0;
    }
      else  if (n % 2 != 0)
        {
            int rowno = 1;
            while (rowno <= n)
            {
                cout << "*" << "  ";
                rowno = rowno + 1;
            }
            cout << endl;
            int count = 1;
            int stars = n-1;
            int space = 1;
            while (count <= n/2)
            {

                int counter = 1;
                while (counter <= (stars / 2))
                {
                    cout << "*"
                         << "  ";
                    counter += 1;
                }

                int copy_space = space;
                while (copy_space > 0)
                {
                    cout << " "
                         << "  ";
                    copy_space = copy_space - 1;
                }
                counter = 1;
                while (counter <= (stars / 2))
                {
                    cout << "*"
                         << "  ";
                    counter += 1;
                }
                cout << endl;
                stars = stars - 2;
                space = space + 2;
                count = count + 1;
            }

            count = 1;
            space -= 4;
            stars += 4;

            while (count <= n/3)
            {

                int counter = 1;
                while (counter <= (stars / 2))
                {
                    cout << "*"
                         << "  ";
                    counter += 1;
                }

                int copy_space = space;
                while (copy_space > 0)
                {
                    cout << " "
                         << "  ";
                    copy_space = copy_space - 1;
                }
                counter = 1;
                while (counter <= (stars / 2))
                {
                    cout << "*"
                         << "  ";
                    counter += 1;
                }
                cout << endl;
                stars = stars + 2;
                space = space - 2;
                count = count + 1;
            }

            rowno=1;

            while (rowno <= (2 * n - n))
            {
                cout << "*"
                     << "  ";
                rowno = rowno + 1;
            }
        }
        else
        {
            return 0;
        }
    }

    return 0;
}