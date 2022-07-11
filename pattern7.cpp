/*
        * 
      * * 
    * * * 
  * * * * 
* * * * *   
                   */

#include <iostream>
using namespace std;
int main(){ //start
	int n;
	cin>>n;

	int rowno=1;

 // ========================
	while(rowno<=n){//2<=5
			int spacecount=1;

	// loop
			while(spacecount<=n-rowno){
				cout<<" "<<" ";
				spacecount++;//2

			}
            int count=1;
            while(count<=rowno){
				cout<<"*"<<" ";
				count=count+1;//2

			}


			cout<<endl;
			rowno=rowno+1;//3
	// ========================

	}
	return 0;//end
} 