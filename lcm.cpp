#include <iostream>
using namespace std;
int main() {
    int n1, n2, max;
    cin>>n1>>n2;

    // maximum number between n1 and n2 is stored in max
    if(n1>n2){
        max=n1;
    }
    if(n2>n1){
        max=n2;
    }

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
           cout<<max;
            break;
        }
        max++;
    }
    return 0;
}