#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        int x;
        cin >> x;
        int i = 0, ld;
        int ans = 0;
        while (x > 0)
        {
            ld = x % 10;
            ans = ans + ld * pow(2, i);
            x = x/ 10;
            i++;
        }
        
        cout << ans<<endl;
    }

    return 0;
}