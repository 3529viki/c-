#include<iostream>
using namespace std;
int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans[1001];

	for(int i=0;i<n;i++){
		ans[arr[i]]++;
	}
	for(int i=0;i<1001;i++){
		if(ans[i]==1){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}

// ANOTHER METHOD

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 		cin >> arr[i];
// 	int cnt[64] = {0};
// 	for (int i = 0; i < n; i++)
// 	{
// 		int j = 0;
// 		int num = arr[i];
// 		while (num > 0)
// 		{
// 			cnt[j++] += (num & 1);
// 			num = num >> 1;
// 		}
// 	}
// 	// for(int i=0;i<n;i++)
// 	// 	cout<<cnt[i];
// 	int p = 1;
// 	int ans = 0;
// 	for (int i = 0; i < 64; i++)
// 	{
// 		cnt[i] = cnt[i] % 3;
// 		ans += cnt[i] * p;
// 		p = p << 1;
// 	}
// 	cout << ans;
// 	return 0;
// }