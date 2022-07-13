#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int  n, no, ld;
    cin >> n;
    for (int j=1; j <= n; j++)
    {
        cin >> no;
        int i=1;
        int ans = 0;
        while (no != 0)
        {
            ld = no % 2;
            no = no / 2;
            ans = ans + ld * i;
            i = i * 10;
        }
        int count = 0;
        while (ans != 0)
        {
            ld = ans % 10;
            if (ld == 1)
            {
                count++;
            }
            ans /= 10;
        }
        cout << count << endl;
    }
    return 0;
}