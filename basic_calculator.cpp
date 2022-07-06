#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        char ch;
        int a,b;
        cin>>ch;
        if(ch == '+')
        {
            cin>>a>>b;
            cout<<a+b<<endl;
        }
        else if(ch == '-')
        {
            cin>>a>>b;
            cout<<a-b<<endl;
        }
        else if(ch == '*')
        {
            cin>>a>>b;
            cout<<a*b<<endl;
        }
        else if(ch == '%')
        {
            cin>>a>>b;
            cout<<a%b<<endl;
        }
        else if(ch == '/')
        {
            cin>>a>>b;
            cout<<a/b<<endl;
        }
        else if(ch == 'X' or ch == 'x')
        {
            break;
        }
        else
        {
            cout<<"Invalid operation. Try again."<<endl;
        }

    }
    return 0;
    
}