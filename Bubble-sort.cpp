#include <iostream>
using namespace std;
int main()
{

    int arr[] = {2, 4, 3, 5, 7, 1, 1, 0, 6};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; 

    return 0;
}

// DIFFERENT TYPES OF SWAPPING  -----

// using 3rd variable
// int temp=arr[j];
// arr[j]=arr[j+1];
// arr[j+1]=temp;

// without using 3rd variable
// arr[j]=arr[j]+arr[j+1];
// arr[j+1]=arr[j]-arr[j+1];
// arr[j]=arr[j]-arr[j+1];

// inbuild swap
//  swap(arr[j],arr[j+1]);
//  swap(arr[j+1],arr[j]);

// one line swap
//	arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);
