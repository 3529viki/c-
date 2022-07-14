#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t > 0)
    {
        long long int n, x;
        cin >> n;
        cin >> x;
        int temp = n % x;//n friends ,x candies
        if (x - temp <= temp)
        {
            cout << x - temp << endl;
        }
        else
        {
            cout << temp << endl;
        }          
        t--;
    }
    return 0;
}