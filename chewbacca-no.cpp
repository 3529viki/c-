#include <iostream>
using namespace std;

int main()
{

    char a[50];
    cin >> a;
    long long i = 0;
    if (a[i] == '9'){
        i++;
    } 
    for (; a[i] != '\0'; i++)
    {
        long long digit = a[i] - '0';
        if (digit >= 5)
        {
            digit = 9 - digit;
            a[i] = digit + '0';
        }
    }
    cout << a << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// inline void change(char &x)
// {
// 	x =  '0'+9-x+'0';
// }
// int main()
// {
// 	char num[32];
// 	cin>>num;

// 	if(num[0] != '9' && num[0] >='5' )
// 	{
// 		change(num[0]);
// 	}

// 	for(int i=1;i<strlen(num);i++)
// 	{
// 		if(num[i] >= '5')
// 		{
// 			change(num[i]);
// 		}
// 	}
	
// 	cout<<num<<endl;

// 	return 0;
// }