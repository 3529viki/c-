/*pascal triangle (pattern3) 
1
1	1
1	2	1
1	3	3	1
1	4	6	4	1
1	5	10	10	5	1
                                     */
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

 // USING FOR LOOP

//   for(int row=1; row<=n; row++)
//   {
//     int a=1;
//     for(int i=1; i<=row; i++)
//     {
//       cout<<a<<" ";
//       a = a * (row-i)/i;    
//     }
//     cout<<endl;
//   }
//      //a=startval, i=count


// USING WHILE LOOP
int rowno=1;
while(rowno<=n){
    int startval=1;
    int count=1;
    while(count<=rowno){
        cout<<startval<<" ";
        startval=startval*(rowno-count)/count;
        count++;

    }
    cout<<endl;
    rowno++;
}
  return 0;
}