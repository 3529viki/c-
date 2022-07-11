/* square pattern
   1 2 3 4 5
   2 2 3 4 5
   3 3 3 4 5
   4 4 4 4 5
   5 5 5 5 5 */

#include <iostream>
using namespace std;

int main() {
     int n;
     cin>>n;

     int rowno=1;

     while(rowno<=n){
         int count=1;

         while(count<=rowno){
             cout<<rowno<<" ";
             count++;

            }
               while(count<=n){
                 cout<<count<<" ";
                 count++;

                }
                cout<<endl;
                rowno++;

        }


    return 0;
}