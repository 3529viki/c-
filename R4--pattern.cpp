#include<iostream>
using namespace std;

int main(){
    int n,rowno=1;
    cin>>n;
    
     int strcnt=1;
    while(rowno<=n){
     int copy_space=strcnt;
        while(copy_space>0){
            cout<<"*"<<" ";
            copy_space--;
        }
        cout<<endl;
        strcnt++;
        rowno++;
    }


    return 0;
}