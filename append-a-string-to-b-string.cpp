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

void appendbtoa(char a[1000], char b[1000]){
    int i=lengthofarr(a);
    int j=0;

    while(j<=lengthofarr(b)){
        a[i]=b[j];
        i++;
        j++;
    }
}

   
    int main()
    {
        char a[1000];
        cin.getline(a, 1000);

        char b[1000];
        cin.getline(b, 1000);
        cout<<"This is arr a: "<<a<<endl;
        cout<<"This is arr b: "<<b<<endl;
        appendbtoa(a,b);
        
        cout<<"This is arr a: "<<a<<endl;
        cout<<"This is arr b: "<<b<<endl;

        return 0;
    }