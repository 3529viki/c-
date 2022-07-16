/*  xor statement
question is that in a number every digit is repeated twice except one and 
that one digit we got in the output 
for example   4335242 ----> the output is digit 5
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0,no;
    while(n--){  //n-- non zero value k liye chalta h bas also for negative value chalega

        cin>>no;
        ans=ans^no;
    }
    
    cout<<"unique no is:"<<ans<<endl;

    return 0;
}