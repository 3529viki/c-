#include<iostream> 
using namespace std;
int main()
{
    int n, oddSum = 0, evenSum = 0;
    cin >> n;
    
    int counter = 1;
    while (n != 0)
    {
        if (counter % 2 == 0)
        {
            evenSum += n % 10;
            n =n/10;
        }
        else
        {
            oddSum += n % 10;
            n =n/10;  //first number as counter=1 is take place in oddSum and then counter++
        }
        counter++;
    }

    
    cout <<oddSum<<endl;
    cout<<evenSum<<endl;
}