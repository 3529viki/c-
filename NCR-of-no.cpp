#include <iostream>
using namespace std;

int fact(int no)
{
    int ans = 1;
    for (int i = no; i > 0; i--)
    {
        ans = ans * i;
    }
    return ans;
}
void ncr(int n, int r)//call stack
{
    int finalans = fact(n) / (fact(r) * fact(n - r));
    cout << finalans << endl;
}

int main()
{

    int n, r;
    cin >> n >> r;
    ncr(n, r);

    return 0;
}