#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int j;
        cin >> j;
        int k;
        int arr[j];
        for (k = 0; k <= j - 1; k++)
        {
            cin >> arr[k];
        }

        int given_sum;
        cin >> given_sum;
        sort(arr, arr + k);
        int low = 0;
        int high = j - 1;
        int fidx = -1;
        int lidx = -1;
        int min = INT_MAX;

        while (low < high)
        {
            int diff = 0;

            if (arr[low] + arr[high] < given_sum)
            {
                low++;
            }
            else if (arr[low] + arr[high] > given_sum)
            {

                high--;
            }
            else
            {
                diff = abs(arr[high] - arr[low]);
                if (diff < min)
                {
                    min = diff;
                    fidx = low;
                    lidx = high;
                }
                low++;
            }
        }
        cout << "Deepak should buy roses whose prices are"
             << " " << arr[fidx] << " "
             << "and"
             << " " << arr[lidx]<<"." << endl;
    }

    return 0;
}