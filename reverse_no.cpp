//reverse no. using simple method not making reverse function
#include <iostream>
using namespace std;

int main() {

  int no,ld;

  cin >> no;

  int count=0;
  while(no>0) {
    ld = no% 10;
    count = count * 10 + ld;
    no=no/10;
  
  }

  cout <<count<<endl;

  return 0;
}