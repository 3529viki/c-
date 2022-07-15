#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10000];
    int n;
    cin >> n;
    

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // 3/2/2/5/4-->2 2 3 4 5
    }
      sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
