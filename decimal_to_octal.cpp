#include <iostream>
#include<math.h>
using namespace std;
int main(){
     int ans=0,n,i=1,ld;
      cin>>n;
     while (n!=0) {
    ld= n % 8;
    n =n/8;
    ans =ans+ ld*i ;
    i=i*10;
  }
  cout<<ans;
    return 0;
}