// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int a, b;
//   cin >> a >> b;
//   int xr = a ^ b;

//   int maxxr = 0;
//   int i = 0;
//   while (xr > 0)
//   {
//     int ld = xr % 10;
//     if ((ld & 1) == 0) // bitwise operator direct binary pr kam krega

//     {
//       xr = xr >> 1;
//       ld = 1;
//     }
//     else if ((ld & 1) > 0)
//     {
//       xr = xr >> 1;
//       ld = 1;
//     }
//     maxxr = maxxr + ld * pow(2, i);
//     i++;
//   }
//   cout<<maxxr<<endl;

//   return 0;
// }

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int xr = a ^ b;
  int msbpos = 0;
  while (xr > 0)
  {
    msbpos++;
    xr = xr >> 1;
  }

  int maxxr = 0;
  int x = 1;
  while (msbpos > 0)
  {
    maxxr += x;
    x = x << 1;
    msbpos--;
  }
  cout << maxxr << endl;

  return 0;
}