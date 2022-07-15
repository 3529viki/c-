// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, ld, ans = 0;
//     cin >> n;

//     while (n>0)
//     {
//         ld = n % 10;
//         if (ld == 0)
//         {
//             ld = 5;
//         }
//        ans=ans*10 + ld;
//         n /= 10;

//     }

//     int result=0;
//     while(ans!=0){
//     int ld=ans%10;
//     result=result*10 + ld;
//      ans/=10;

//     }
//     cout<<result<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    long long n, ld;
    cin >> n;

    if(n==0){
        cout<<5<<endl;
    }
    else{

    long long ans = 0, cnt = 1;
    while (n > 0)
    {
        
        long long ld = n % 10;
        if (ld == 0)
        {
            ld = 5;
        }

        ans = ld * cnt + ans;
        n = n / 10;
        cnt = cnt * 10;
    }

    cout << ans << endl;
    }

    return 0;
}
