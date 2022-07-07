/*

             5                   5
             5 4               4 5
             5 4 3           3 4 5
             5 4 3 2       2 3 4 5
             5 4 3 2 1   1 2 3 4 5
             5 4 3 2 1 0 1 2 3 4 5
             5 4 3 2 1   1 2 3 4 5
             5 4 3 2       2 3 4 5
             5 4 3           3 4 5
             5 4               4 5
             5                   5       */

#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;

  int rowno = 1;
   //for row 1 to 5
  int spacescount = 2 * N - 1;
  while (rowno <= N)
  {

    int countfirstdec = 1;
    int startvaldec = N;
    while (countfirstdec <= rowno)
    {
      cout << startvaldec << " ";
      startvaldec--;
      countfirstdec++;
    }

    int copy_space = spacescount;
    while (copy_space > 0)
    {
      cout << "  ";
      copy_space--;
    }

    int incount = 1;
    int startvalin = (N - rowno) + 1;
    while (incount <= rowno)
    {
      cout << startvalin << " ";
      startvalin++;
      incount++;
    }

    cout << endl;
    rowno = rowno + 1;
    spacescount = spacescount - 2;
  }

  //for row+n+1
  //for n+5 rowno 6 is below

  int countfirstdec = 1;
  int startvaldec = N;

  while (countfirstdec <= (N + 1))
  {
    cout << startvaldec << " ";
    startvaldec--;
    countfirstdec++;
  }

  int incount = 1;
  int startvalinc = 1;
  while (incount <= N)
  {
    cout << startvalinc << " ";
    startvalinc++;
    incount++;
  }
  cout << endl;
  rowno++;

   // next row from N+1 to 2*N+1
   //for N=5 rows from 7 to 11

   int counter=1;
   spacescount = 1;
  while (rowno > (N + 1) && rowno <= (2 * N + 1))
  {
     
    int countfirstdec = 1;
    int startvaldec = N;
    while (countfirstdec <=rowno-(2*counter))
    {
      cout << startvaldec << " ";
      startvaldec--;
      countfirstdec++;
    }

    int copy_space = spacescount;
    while (copy_space > 0)
    {
      cout << "  ";
      copy_space--;
    }

    int incount = 1;
   
    int startvalinc = rowno - (N + 1);
    while (incount <=rowno-(2*counter))
    {
      cout << startvalinc << " ";
      startvalinc++;
      incount++;
      
    }
    cout << endl;
    rowno = rowno + 1;
    spacescount = spacescount + 2;
    counter++;
  }

  return 0;
}
