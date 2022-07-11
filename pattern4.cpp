/* 1
   2 2
   3 0 3
   4 0 0 4
   5 0 0 0 5 */

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
       if(n==1){
           cout<<1<<endl; 
       }
       else if(n==2){
           cout<<1<<" ";
           cout<<endl;
           cout<<2<<" "<<2<<endl;
       }
       else{
           cout<<1<<" ";
           cout<<endl;
           cout<<2<<" "<<2<<endl;

           int row=3;
           while(row<=n){
               cout<<row<<" ";
               int no_ofzeros = row-2;
               while(no_ofzeros>0){

                   cout<<0<<" ";
                   no_ofzeros=no_ofzeros-1;
               }

               cout<< row<<" ";
               cout<<endl;  
               row++;


           }
       }
}
