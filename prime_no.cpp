// #include <iostream>
// using namespace std;
// int main()
// {

//     int n, i, prime = 1;
//     cin >> n;

//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//     }
//     if (prime == 0)
//     {
//         cout << "Not Prime" << endl;
//     }
//     else
//     {
//         cout << "Prime" << endl;
//     }

//     return 0;
// }

// // another method
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME";
            break;
        }
        i++;
    }
    if(i==n){
    cout << "Prime";
    }
    return 0;
}