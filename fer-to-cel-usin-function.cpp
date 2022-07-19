#include <iostream>
using namespace std;

void printtable()
{
    int init, final, step;
    cin >> init >> final >> step;
    int fer = init;
    while (fer <= final)
    {
        int cel = (5.0 / 9) * (fer - 32);
        cout << init << "  " << cel << endl;
        fer = fer + step;
    }
}
int main()
{
    printtable();
    printtable();

    return 0;
}