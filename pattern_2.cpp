/* _ _ _ _ 1
   _ _ _ 2 3 2
   _ _ 3 4 5 4 3
   _ 4 5 6 7 6 5 4
   5 6 7 8 9 8 7 6 5    */
// spaces = trows -rowno
// startvalinc=rowno
// startvaluedec=2*row -2
// inccount= countfirstinc<=rowno
// countfirstdec= countfirstdec<=rowno-1

#include <iostream>
using namespace std;

int main()
{

    int trows;
    cin >> trows;

    int rowno = 1;

    while (rowno <= trows)
    {

        int spacecount = 1;
        while (spacecount <= trows - rowno)
        {
            cout << "  ";
            spacecount++;
        }

        // increment order

        int inccount = 1;
        int startvalinc = rowno;
        while (inccount <= rowno)
        {
            cout << startvalinc << " ";
            startvalinc++;
            inccount++;
        }

        int countfirstdec = 1;
        int startvaldec = (2 * rowno) - 2;
        while (countfirstdec <= rowno - 1)
        {
            cout << startvaldec << " ";
            startvaldec--;
            countfirstdec++;
        }
        cout << endl;
        rowno++;
    }

    return 0;
}