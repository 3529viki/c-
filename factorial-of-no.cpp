#include <iostream>
using namespace std;

void factorial(int n)
{
    int ans = 1;

    // int n;
    // cin >> n; // 5
    while (n > 0)
    {
        ans = ans * n; // 5*4*3*2*1
        n--;
    }
    cout << ans << endl;
}

int fact(int no)
{
    int ans = 1;
    for (int i = no; i > 0; i--)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;

    factorial(n);
    int no;
    cin >> no;
    cout << fact(no) << endl; // return fact(no) kraya tha isiliye agr output chaiye to cout lena pdega
    cout << fact(no) + 100;   // return kraya tha isiliye isko update kr skte h ese

    return 0;
}
