// find largest no. between 5 numbers with input by user 
#include <iostream>
using namespace std;
int main()
{
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    int max = A[0];
    for (int i = 1; i < 5; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << max << endl;
}

//using while loop------

#include <iostream>
// using namespace std;
// int main()
// {
//     int ARR[5];
//     int a=0;
//     while ( a < 5)
//     {
//         cin >> ARR[a];
//         a++;
//     }
//     int largest = ARR[0];
//     int b = 1;
//     while (b < 5)
//     {
//         if (ARR[b] > largest)
//         {
//             largest = ARR[b];
//         }
//         b++;
//     }
//     cout << largest;
//     return 0;
// }