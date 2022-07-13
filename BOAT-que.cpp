/* YOU ARE GIVEN AN ARRAY PEOPLE WHERE PEOPLE[I] IS THE WEIGHT OF THE Ith PERSON,AND AN INFINITE NUMBER OF BOATS WHERE EACH BOAT CAN CARRY
A MAXIMUM WEIGHT OF LIMIT .EACH BOAT CARRIES AT MOST TWO PEOPLE AT THE SAME TIME ,PROVIDED THE SUM OF THE WEIGHT OF THOSE PEOPLE IS AT MOST LIMIT.

RETURN THE MINIMUM NUMBER OF BOATS TO CARRY EVERY GIVEN PERSON */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, limit, boats = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> limit;
    sort(arr, arr + n);

    int start = 0, end = n - 1;

    while (start <= end)
    {
        if (arr[start] + arr[end] <= limit)
        {
            boats += 1;
            start++;
            end--;
        }
        else
        {
            boats+=1;
            end--;
        }
    }
    cout<<boats<<endl;

    return 0;
}