/*
for n=5 print

ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA

*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int rowno = 1;

    
    while (rowno <= n)
    {
        int cntinc = 1;
    char firstchar = 'A';

        while (cntinc <= n - rowno + 1)
        {
            cout << firstchar << " ";
            firstchar++;
            cntinc++;
        }
        firstchar -= 1;
        int cntdec = 1;
        while (cntdec <= n - rowno + 1)
        {
            cout << firstchar << " ";
            firstchar--;
            cntdec++;
        }
        cout<<endl;
        rowno++;
    }
    return 0;
}