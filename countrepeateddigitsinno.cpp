#include<iostream>
using namespace std;
int main() {

	int no;
    cin>>no;
	int digit;
    cin>> digit;
	int count=0;
   while(no>0){
	int ld=no%10;
	if(ld==digit){
      count=count+1;
	}
	no=no/10;
   }
    cout<<count<<endl;

	return 0;
}
