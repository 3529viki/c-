#include<iostream>
using namespace std;
int main()
{
    int t,M,N;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x=0,y=0,summ=0,sumn=0;
        cin>>M;
        cin>>N;
        while(1)
        {
            if(summ>M)
            {
                cout<<"Harshit"<<endl;
                break;
            }
            if(sumn>N)
            {
                cout<<"Aayush"<<endl;
                break;
            }
            x=y+1;
            y=x+1;
            summ=summ + x;
            sumn=sumn + y;
        }
    }
	return 0;
}