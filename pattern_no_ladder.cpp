/* pattern number ladder
1 
2 3 
4 5 6
7 8 9 10
11 12 13 14 15 
                              */
#include <iostream>
using namespace std;
int main(){ //start
	int n;
	cin>>n;

	int rowno=1;
     int  startval=1;
 // ========================
	while(rowno<=n){//2<=5
			int count=1;

	// loop
			while(count<=rowno){
				//cout<<"*"<<" ";
                cout<<startval<<" ";
                startval++;
				count=count+1;//2

			}

			cout<<endl;
			rowno=rowno+1;//3
	// ========================

	}
	return 0;//end
} 