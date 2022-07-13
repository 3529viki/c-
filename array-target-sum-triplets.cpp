#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[1000];
    int target;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> target;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                }
            }
        }
    }
}



//USING ANOTHER METHOD USING SORTING

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, arr[1000];
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int given_sum;
//     cin >> given_sum;
//     sort(arr, arr + n);
//     int p = 0;
//     while (p <= n - 2)
//     {
//         int no1 = arr[p];
//         int c = given_sum - no1;

//        int i = p + 1;
//         int j = n - 1;
//         while (i < j)
//         {

//             int curr_sum = arr[i] + arr[j]; // sum of first element and last element

//             if (curr_sum < c)
//             {
//                 i++;
//             }
//             else if (curr_sum == c)
//             {
//                 cout << no1 << ","
//                      << " " << arr[i] << " "
//                      << "and"
//                      << " " << arr[j] << endl;
//                 i++;
//             }
//             else
//             {
//                 j--;
//             }
//         }
//        if (i >= j)
//         {

//         }
//         p++; 
//     }

//     return 0;
// }