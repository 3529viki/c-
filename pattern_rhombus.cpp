 /*                      1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1              */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rowno=1;
    
    while(rowno<=n){

        int spacecount=1;
        while(spacecount<=n-rowno){
           cout<<" "<<" ";
           spacecount++;
        }

        int incount=1;
        int startvalin=rowno;
        while(incount<=rowno){
            cout<<startvalin<<" ";
            startvalin++;
            incount++;
        }
        
        int countdec=1;
        int startvaldec=(2*rowno)-2;
        while(countdec<=rowno-1){
            cout<<startvaldec<<" ";
            countdec++;
            startvaldec--;

        }

        cout<<endl;
        rowno++;

    }


    //lower part

     int dec1=n-2;
    int decnum=2*n-4; 
    while(rowno>=n+1 && rowno<=2*n-1){
        
        int spacecount=1;
        while(spacecount<=rowno-n){
        cout<<" "<<" ";
        spacecount++;
       }

        int incount=1;
        int startvalin=2*n-rowno;
        while(incount<=2*n-rowno){
            cout<<startvalin<<" ";
            startvalin++;
            incount++;
        }
    

        int copy_decval=decnum;
         int countdec=dec1;
            while(countdec>0){
            cout<<copy_decval<<" ";
            countdec--;
            copy_decval--;
            
        }
        dec1--;
        decnum-=2;
        cout<<endl;
        rowno++;
           
    }   

    return 0;
}

// ANOTHER METHOD

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int rowno=1;
// int space=n-1;
// while(rowno<=n){
// int spacecount=space;
// while(spacecount>0){
//     cout<<'\t';
//     spacecount--;
// }
// int j=rowno;
// while (j<=2*rowno-1)
// {
// cout<<j<<"\t";
// j++;
// }
// int deccnt=rowno-1;
// int decval=2*(rowno-1);
// while(deccnt>0){
//     cout<<decval<<'\t';
//     decval--;
//     deccnt--;
// }
// cout<<endl;
// space--;
// rowno++;
// }
// //upper half done
// int spc1=1;
// int inc1=n;
// int dec1=n-2;
// int incval=rowno-2;
// int decnum=2*n-4;
// while(rowno<2*n){
// int counspc1=1;
// while(counspc1<=spc1){
//     cout<<"\t";
//     counspc1++;
// }
// int copy_val=incval;
// int couninc1=1;
// while(couninc1<inc1){
//     cout<<copy_val<<"\t";
//     copy_val++;
//     couninc1++;
// }
// int coundec1=dec1;
// int copy_decval=decnum;
// while(coundec1>0){
// cout<<copy_decval<<"\t";
// copy_decval--;
// coundec1--;
// }

//     decnum-=2;
//     incval--;
//     inc1--;
//     dec1--;
//     cout<<endl;
//     spc1++;
//     rowno++;
// }
//     return 0;
// }
