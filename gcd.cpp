#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << b;
    return 0;
}


// //ANOTHER METHOD
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int counter = min(a, b);
//     int ans = 1;
//     int i = 1;
//     while (i <= counter)
//     {
//         if (a % i == 0 and b % i == 0)
//         {
//             ans = i;
//         }
//         i++;
//     }
//     cout << ans << endl;
// }
