#include<iostream>
using namespace std;

int main(){
    int n,rowno=1;
    cin>>n;
        int cnt=1;
        if(n%2==0){
            int startval=n-1;
            while(cnt<=n/2){
                cout<<startval<<endl;
                startval-=2;
                cnt++;
            }
             startval=2;
            rowno=n/2+1;
            while(rowno<=n){
                cout<<startval<<endl;
                startval+=2;
                rowno++;
            }

        }
        else{
             cnt=1;
            int startval=n;
            while(cnt<=(n/2)+1){
                cout<<startval<<endl;
                startval-=2;
                cnt++;
            }
            startval=2;
            rowno=n/2+2;
            while(rowno<=n){
                cout<<startval<<endl;
                startval+=2;
                rowno++;
            }

        }

        
    
    

    return 0;
}