#include <iostream>
using namespace std;
int main(){
    long long int N;
    cin>>N;
    long long int arr[N];
	for(int i=0;i<N;i++)
	{
	    cin>>arr[i];
	}
    int cnt=0;
	for(int pos=0;pos<=N-2;pos++){//4
	int min=pos;
    int flag=0;
	for(int j=pos+1;j<=N-1;j++){
		if(arr[j]<arr[min]){
			min=j;
            flag=1;
		}
	}
    if(flag==1){
            cnt++;
            swap(arr[min],arr[pos]);
        }
}
	cout<<cnt<<endl;
	return 0;
}