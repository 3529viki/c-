#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x=0,i=1;
    long long copy_num=n;
    while(copy_num){
        if((copy_num&1)==0){
            x+=i;       
        }
        else if((copy_num&1)==1){
            x+=i;
        }
        i<<=1;
        copy_num>>=1;
    }
    cout<<abs(x-n)<<" "<<x<<endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int

// vector<ll> changeBits(ll N)
// {
//     ll m = N;
//     ll x = 0, i = 1;
//     while (m)
//     {
//         if (!(m & 1))
//         {
//             x += i;
//         }
//         i <<= 1;
//         m >>= 1;
//     }
//     return {x, N + x};
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     vector<ll> ans = changeBits(n);
//     cout << ans[0] << " " << ans[1] << endl;

//     return 0;
// }

