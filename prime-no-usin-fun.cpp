#include <iostream>
using namespace std;
void isprime()
{

    int n;
    cin >> n;
    int i = 2;
    
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME";
            break;
        }
        i++;
    }
    if(i==n){
    cout << "Prime";
    }
}

int main()
{

    isprime();
    isprime();
    isprime();
    isprime();
    isprime();
    isprime();

    return 0;
}