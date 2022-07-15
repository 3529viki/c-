// TAAKE A ARRAY AND PLACE ALL NONZERO ELEMENTS IN ARRAY IN START OF THE ARRAY IN SAME ORDER AS THEY COME IN GIVEN ARRAY
// FOR EXAMPLE IF ARRAY INPUT IS 0 0 0 1 2 3 THEN OUTPUT IS 1 2 3 0 0 0.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pivot=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[pivot]);
            pivot++;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }

    return 0;
}