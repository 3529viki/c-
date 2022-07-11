/*
* 
* *
* * *
* * * *
* * * * *
                 */
#include<iostream>
using namespace std;
int main(){
   //i=rowno.
   //n total no. of rows
   //count
       int i=1,n;

       cin>>n;

       while(i<=n){

          int j=1;

          while(j<=i){

               cout<<"*"<<" ";
               
              j++;
           }

           i++;
           cout<<endl;
        }
   return 0;
}