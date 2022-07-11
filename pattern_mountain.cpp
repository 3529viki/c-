/*pattern mountain
 1           1
 1 2       2 1  
 1 2 3   3 2 1
 1 2 3 4 3 2 1   
                      */

#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;

  int rowno = 1;
   //for row 1 to 5
  int spacescount = 2 * N - 3;
  while (rowno <= N-1)
  {

    int incount = 1;
    int startvalin = 1;
    while (incount <= rowno)
    {
      cout << startvalin << " ";
      startvalin++;
      incount++;
    }

    
    int copy_space = spacescount;
    while (copy_space > 0)
    {
      cout << "  ";
      copy_space--;
    }
     
     int countfirstdec = 1;
    int startvaldec = rowno;
    while (countfirstdec <= rowno)
    {
      cout << startvaldec << " ";
      startvaldec--;
      countfirstdec++;
    }

    cout << endl;
    rowno = rowno + 1;
    spacescount = spacescount - 2;
  }

   //for rowno=N

   
   int incount = 1;
  int startvalinc = 1;
  while (incount <= N)
  {
    cout << startvalinc << " ";
    startvalinc++;
    incount++;
  }
   
   int countfirstdec = 1;
  int startvaldec = N-1;
  while (countfirstdec <= (N -1))
  {
    cout << startvaldec << " ";
    startvaldec--;
    countfirstdec++;
  }

  
  cout << endl;
  rowno++;

}