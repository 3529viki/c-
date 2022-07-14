#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int inverse[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int index = i;
        int val = arr[i];
        swap(index,val);

        inverse[index]=val;
    }
    for(int i=0;i<n;i++){
        cout<<inverse[i]<<" ";
    }

    return 0;
}