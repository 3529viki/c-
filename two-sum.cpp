// take input given sum in array and print yes if sum of array element is equal to given sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,4,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    int given_sum;
    cin>>given_sum;
    int i=0;
    int j=n-1;
    sort(arr,arr+n);

    while(i<j){
        int curr_sum=arr[i] + arr[j]; //sum of first element and last element

        if(curr_sum<given_sum){
            i++;
        }
        else if(curr_sum==given_sum){
            cout<<"Yes";
            break;
        }
        else{
            j--;
        }
    }
    if(i>=j){
        cout<<"No";
    }

return 0;

}