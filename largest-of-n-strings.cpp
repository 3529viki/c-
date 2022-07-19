//it is same as largest of four nos. ,firstly we input one string and consider that string as largest string and also calculate its length
#include <iostream>
using namespace std;
int lengthofarr(char arr[])
{
    int i = 0;
    int c = 0;

    while (arr[i] != '\0')
    {
        c++; // 5
        i++; // 5
    }
    return c;
}

    void copy(char b[1000], char a[1000])
    {
        int i = 0;
        int j = 0;

        // int l=lengthofarr(a);
        // while(i<=l){}
        while (i <= lengthofarr(a))
        {
            b[j] = a[i];
            i++;
            j++;
        }
    }

    int main()
    {
        int n;
        cin>>n;
        char a[1000];
        cin.ignore();
        cin.getline(a, 1000);//"blocks" , length is 6
        char largeststring[1000];
        copy(largeststring,a);
        int maxlengthofstring=lengthofarr(a);

        char b[1000];

        int cnt=1;
        while(cnt<=n-1){
            cin.getline(b,1000);
            if(lengthofarr(b)>maxlengthofstring){
                copy(largeststring,b);
                maxlengthofstring=lengthofarr(b);
            }
            cnt++;
        }
        
        cout<<"This is largest string: "<<largeststring<<endl;
        cout<<"The length of largest string is: "<<maxlengthofstring<<endl;

        return 0;
    }