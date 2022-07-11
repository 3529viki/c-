/*half pyramid
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
                   */


#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

    int rowno = 1;
    while (rowno <= n)
    {
      int count = 1;
      int startvalinc = 1;
      while(count<=rowno){
        cout<<startvalinc<<" ";
        startvalinc++;
        count++;
        
      }
      
      
      cout<<endl;
      rowno++;
    }
  

  return 0;
}