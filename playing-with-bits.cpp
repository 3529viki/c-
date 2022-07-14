// #include <iostream>
// using namespace std;
// int main()
// {
//     long long Q, ld, rem,a, b,j=1,count=0; 
//     cin >> Q;
//     while (j<= Q)
//     {
//         cin >> a >> b;
//         long long copy_num=a;
//         while (copy_num <= b)
//         {
//             long long i = 1;
//             long long ans = 0;
//             while (copy_num != 0)
//             {
//                 ld = copy_num % 2;
//                 copy_num = copy_num / 2;
//                 ans = ans + ld * i;
//                 i = i * 10;
//             }
        
//             while (ans != 0)
//             {
//                 rem = ans % 10;
//                 if (rem == 1)
//                 {
//                     count++;
//                 }
//                 ans /= 10;
//             }
//             copy_num++;
            
//         }
//         cout << count << endl;
//         j++;
//     }
    

//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    long long Q, ld, rem,a, b,j=1;
    cin >> Q;
    while (j<= Q)
    {
       long long count=0; 
        cin >> a;
        cin>>b;
      
        while (a <= b)
        {
             int copy_num=a;
            long long i = 1;
            long long ans = 0;
            while (copy_num != 0)
            {
                ld = copy_num % 2;
                copy_num = copy_num / 2;
                ans = ans + ld * i;
                i = i * 10;
            }
        
            while (ans != 0)
            {
                rem = ans % 10;
                if (rem == 1)
                {
                    count++;
                }
                ans /= 10;
            }
            a++;
            
        }
        cout << count << endl;
        j++;
    }
    

    return 0;
}