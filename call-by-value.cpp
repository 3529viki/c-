#include<iostream>
using namespace std;

void update(int a){
    a=a+10;
    cout<<"value of a inside update is "<<a<<endl;
}
int main(){
    int a=10;
    cout<<"value of a befor update is "<<a<<endl;
    update(a);
    cout<<"value of a after update is "<<a<<endl;
}