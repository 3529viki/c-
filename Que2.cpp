// start from origin a person move in some directions like SSSNEEEW give its shortest path and print values of x-axis and y-axis
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    char ch;
    ch = cin.get();

    int x = 0, y = 0;
    while (ch != '\n')
    {
        if (ch == 'E')
        {
            x++;
        }
        else if (ch == 'W')
        {
            x--;
        }
        else if (ch == 'N')
        {
            y++;
        }
        else
        {
            y--;
        }

        ch = cin.get();
    }
    cout << x << " " << y << endl;

    // 1st quadrant
    if (x >= 0 and y >= 0)
    {
        for (int c = 1; c <= x; c++)
        {
            cout << 'E';
        }
        for (int d = 1; d <= y; d++)
        {
            cout << 'N';
        }
    }

    // 2nd quadrant
    else if (x <= 0 and y >= 0)
    {
        for (int c = 1; c <= y; c++)
        {
            cout << 'N';
        }
        for (int k = 1; k<=abs(x); k++)
        {
            cout << 'W';
        }
    }

    //  3rd quadrant
    else if (x <= 0 and y <= 0)
    {
        
        for (int k = 1; k <= abs(y); k++)
        {
            cout << 'S';
        }
        for (int d = 1; d <= abs(x); d++)
        {
            cout << 'W';
        }
    }

    //   4th quadrant
    else
    {
    
        for (int u = 1; u <= x; u++)
        {
            cout << 'E';
        }
        for (int c = 1; c <= abs(y); c++)
        {
            cout << 'S';
        }
    }
    cout << endl;

    return 0;
}
