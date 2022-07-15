// QUE.>> count the characters while ch is not equal to $
#include<iostream>
using namespace std;
int main(){

    char ch;
    ch=cin.get();  //cin.get() has property to include spaces,'\n','\t' .

    int count=0;
    while(ch!='$'){
        count++;
        ch=cin.get();
    }
    cout<<count;

    return 0;
}