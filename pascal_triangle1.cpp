/*
        1
      1   1
    1   2   1
  1   3   3   1
                         */

//#include<iostream>
// using namespace std;
 
// // Function to print the Pascal's Triangle
// int main(){
//     int n;
//     cin>>n;

 
//     // Loop to print each row
//     for(int rowno = 1; rowno <=n; rowno++){
 
//         // Loop to print spaces for triangular display
//         for(int spacecount = 1; spacecount <= n-rowno; spacecount++){
//             cout<<" "<<" ";
//         }
 
//         // Loop to print values using the Combinations formula
//         int startval = 1;
//         for(int count = 1; count <= rowno; count++){
//             cout<<startval<<" "<<" "<<" ";
             
//             startval = startval * (rowno - count)/count;
//         }
        
//         cout<<endl;
//     }
// }


// // USING WHILE LOOP

#include<iostream>
using namespace std;
 

int main(){
    int n;
    cin>>n;

 
    // Loop to print each row
    int rowno = 1;
    while( rowno <=n){
 
        // Loop to print spaces for triangular display
        int spacecount = 1;
        while( spacecount <= n-rowno+1){
            cout<<" "<<" ";
            spacecount++;
        }
 
        // Loop to print values using the Combinations formula
        int startval = 1;
        int count = 1;
        while( count <= rowno){
            cout<<startval<<" "<<" "<<" ";
            startval = startval * (rowno - count)/count;

            count++;
        }
         cout<<endl;
         rowno++;
    }
}



 


 
