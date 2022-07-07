#include <iostream>
#include <limits.h>
using namespace std;


int main() 
{

    int n, curr, prev = INT_MAX, flag = 1;

    int i;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cin >> curr;

        if(flag == 1) // for stricly increasing
        {
            if(curr >= prev)
            {
                flag++;
            }

        }
        else  // for stricly decreasing
        { 
            if(prev >= curr)
            {
                flag++;
                break;
            }

        }
        prev = curr;
    }

    if(flag == 2 || (flag == 1 && n != 1)) 
        cout << "true"<<endl;
    else 
        cout << "false"<<endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int p;
//     cin >> p;
//     bool flag = true;
//     int counter = 1, c;
//     int inc=0,dec=0;
//     while (counter <= n - 1)
//     {
//         cin >> c;

//         if (c == p)
//         {

//             flag = false;
            
//         }

//         else if (c > p)
//         {
//            if(dec>0){
//             flag =false;
//            } 
//             inc++;
//         }

//         else
//         {
//             dec++;
//         }
//         p = c;
//         counter++;
//     }

//     if (inc<2 && dec==0 && flag==0)
//     {
//         cout << "true" << endl;
//     }
//     else if(inc==0 && dec>0 && flag==1 ){
//           cout<<"true"<<endl;
//     }
//     else
//     {
//         cout << "false" << endl;
//     }
// }
