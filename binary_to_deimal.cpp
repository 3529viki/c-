#include <iostream>
#include<math.h>
using namespace std;
int main(){
     int ans=0,n,i=0,ld;
      cin>>n;
     while (n!=0) {
    ld= n % 10;
    n =n/10;
    ans =ans+ ld* pow(2, i);
    i++;
  }
  cout<<ans;
    return 0;
}