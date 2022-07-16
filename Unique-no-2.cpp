#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int res[1001];

	for(int i=0;i<n;i++){
		res[arr[i]]++;
	}
	int cnt=0;
	for(int i=0;i<1001;i++){
		
		if(res[i]==1){
			cout<<i<<" ";
			cnt++;
	   }
	   if(cnt==2){
		   break;
	   }
	}
	return 0;
}

// ANOTHER METHOD

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	int xxory = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 		xxory = xxory ^ arr[i];// it gives xor of all non-repeated nos.
// 	}
// 	cout << xxory << endl;
// 	int rsbm = xxory & -xxory;
// 	cout << rsbm << endl;
// 	int x = 0;
// 	int y = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		if ((arr[i] & rsbm) == 0)
// 		{
// 			x = x ^ arr[i];
// 		}
// 		else
// 		{
// 			y = y ^ arr[i];
// 		}
// 	}
// 	if (x < y)
// 		cout << x << " " << y;
// 	else
// 		cout << y << " " << x;

// 	return 0;
// }