/*
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
                              */

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n; 

    if (n == 1)
    {
        cout << "*";
        return 0;
    }

    int rowno = 1;
    while (rowno <= (2 * n - 1))
    {
        cout << "*";
        rowno = rowno + 1;
    }
    cout << endl;
    int count = 1;
    int stars = 2 * n - 2;
    int space = 1;
    while (count <= n - 1)
    { 

        int counter = 1;
        while (counter <= (stars / 2))
        {
            cout << "*";
            counter += 1;
        }
        // space ka kaam ...//
        int copy_space = space;
        while (copy_space > 0)
        {
            cout << " ";
            copy_space = copy_space - 1;
        }
        counter = 1;
        while (counter <= (stars / 2))
        {
            cout << "*";
            counter += 1;
        }
        cout << endl;
        stars = stars - 2;
        space = space + 2;
        count = count + 1;
    }

    // upper half ...............////////////////////

    count = 1;
    space -= 4;
    stars += 4;

    while (count <= n - 2)
    {

        int counter = 1;
        while (counter <= (stars / 2))
        {
            cout << "*";
            counter += 1;
        }
        // space ka kaam ...//
        int copy_space = space;
        while (copy_space > 0)
        {
            cout << " ";
            copy_space = copy_space - 1;
        }
        counter = 1;
        while (counter <= (stars / 2))
        {
            cout << "*";
            counter += 1;
        }
        cout << endl;
        stars = stars + 2;
        space = space - 2;
        count = count + 1;
    }

    rowno = 1;

    while (rowno <= (2 * n - 1))
    {
        cout << "*";
        rowno = rowno + 1;
    }
    return 0;
}