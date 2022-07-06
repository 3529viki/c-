#include <iostream>
using namespace std;
int main()
{
    int init, final, step;

     cin >> init>>final>>step;

    while(init<=final){
    int cel = (5.0 / 9) * (init - 32) ;
    cout <<init << "  " << cel << endl;
    init=init+step;
     }


    
    return 0;
}