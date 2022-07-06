/*
                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 

                                               */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rowno=1;
    int countspace=1;
    while(countspace<=n-1){
        cout<<"  ";
        countspace++;
    }
    cout<<"1"<<endl;
    rowno++;
//1st over 

    int spct=n-3;
    int spcbwn=1;
    while(rowno<=n/2+1){
        int spacecount=1;
        while(spacecount<=spct){
            cout<<"  ";
            spacecount++;
        }



    int deccount=1;
    int firstdec=rowno;
    while(deccount<=rowno){
        cout<<firstdec<<" ";
        deccount++;
        firstdec--;
    }
    int cntspcbwn=1;
    while(cntspcbwn<=spcbwn){
        cout<<"  ";
        cntspcbwn++;
    }
    int inccnt=1;
    while(inccnt<=rowno){
        cout<<inccnt<<" ";
        inccnt++;
    }
    spcbwn+=2;
    cout<<endl;
    spct-=2;
    rowno++;
    }
//upper half completed
int spc1=2;
int dec1=n/2;
int spcbw1=n-4;
int inc1=n/2;
while (rowno<n){
    int cntspc1=1;
    while(cntspc1<=spc1){
        cout<<"  ";
        cntspc1++;
    }

    int cntdecval=dec1;
    while (cntdecval>0){
        cout<<cntdecval<<" ";
        cntdecval--;
    }
    int counspcbw1=1;
    while(counspcbw1<=spcbw1){
        cout<<"  ";
        counspcbw1++;
    }

    int couninc1=1;
    while(couninc1<=inc1){
        cout<<couninc1<<" ";
        couninc1++;
    }
    inc1--;
    spcbw1-=2;
    dec1--;
    cout<<endl;
    spc1+=2;
    rowno++;
}
    //last row
    int t=1;
    while(n>1 && t<=1){
    int countspace=1;
    while(countspace<=n-1){
        cout<<"  ";
        countspace++;
    }
    cout<<"1";
    rowno++;
    t++;
    }
    return 0;
}