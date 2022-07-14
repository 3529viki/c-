// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, no, rem;
//     cin >> n;
//     while (n > 0)
//     {
//         cin >> no;
//         int count = 0;
//         while (no > 0)
//         {
//             rem = no % 2;
//             if (rem == 1)
//             {
//                 count++;
//             }
//             no = no / 2;
//         }
//         cout << count << endl;
//         n--;
//     }

//     return 0;
// }

// another method using bitwise operators

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, no;
    cin >> n;
    while(n > 0)
    {
        cin>>no;
        int count = 0;
        while (no > 0)
        {
            if ((no & 1) > 0)//bitwise operator direct binary pr kam krega
            
            {
                count++;
            }
            no = no >> 1;
        }
        cout << count << endl;
        n--;
    }
    return 0;
}
