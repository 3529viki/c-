#include <iostream>
using namespace std;

int main()
{
    int c1, c2, c3, c4, n, m, T;
    cin >> T;
    
    while (T--)
    {
        cin >> c1 >> c2 >> c3 >> c4 >> n >> m;
        int ric[n], cab[m];
        for (int i = 0; i < n; i++)
        {
            cin >> ric[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> cab[i];
        }

        int rickshawcost = 0;
        for (int i = 0; i < n; i++)
        {
            rickshawcost += min(c1 * ric[i], c2);
        }

        rickshawcost = min(rickshawcost, c3);
        int cabcost = 0;
        for (int i = 0; i < m; i++)
        {
            cabcost += min(c1 * cab[i], c2);
        }
        cabcost = min(cabcost, c3);

        int final = min(c4, cabcost + rickshawcost);
        cout << final<<endl;
    }
}