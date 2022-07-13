#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0, ans = 0;
    cin >> n;
    int copy_num = n;
    while (copy_num > 0)
    {
        ans = ans + (copy_num % 10);
        copy_num /= 10;
    }
    while (n % 2 == 0)
    {
        sum += 2;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            int copy_num1 = i;
            while (copy_num1 > 0)
            {
                sum = sum + (copy_num1 % 10);
                copy_num1 /= 10;
            }

            n = n / i;
        }
    }

    if (n > 2)
    {
        while (n > 0)
        {
            sum = sum + (n % 10);
            n /= 10;
        }
    }

    if (ans == sum)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}