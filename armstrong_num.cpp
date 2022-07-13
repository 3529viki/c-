//print true if the number taken from user is armstrong no. or not
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ld,digit=0, ans=0;
    cin>>n;

    int copy_num=n;
    while(copy_num!=0){
        copy_num/=10;
        digit++;
    }
    copy_num=n;
    while(copy_num!=0){
        ld=copy_num%10;
        ans= ans + pow(ld,digit);
        copy_num/=10;
    }
    if(ans==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}