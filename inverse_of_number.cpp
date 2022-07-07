#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int ld;
    double num = 0;
    int pos = 1;// this is the count
    while(n>0){
    ld = n%10;
     num = num + pos*(pow(10,(ld-1)));
       n=n/10; 
       pos++;
    }
    cout<<num<<endl;  
    return 0;
}