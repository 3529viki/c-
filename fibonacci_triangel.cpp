#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[1000];
arr[0]=0;
arr[1]=1;
for(int number=2; number<=(n*(n+1))/2; number++){
    arr[number]=arr[number-1]+arr[number-2];
    //this loop show that what is the nth number in the fibo series.
}
int row=1;
int startval=0;
while(row<=n){
    //in this loop we work how many numbers is print in each row and what is the values of that numbers.
    for(int spacecount=1; spacecount<=row; spacecount++){
        cout<<arr[startval]<<" ";
        startval++;
    }
    cout<<endl;
    row++;

}
    return 0;
}



/* another method

#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int tr;
	cin>>tr;//1
	if(tr==1){
		cout<<0<<endl;
		return 0;
	}
	else{

	cout<<0<<endl;
	cout<<1<<'\t'<<1<<endl;
	int a=1;
	int b=1;
	int c=a+b;//1+1 -->2

		int rowno=3;
	while(rowno<=tr){//4<=4
		// ========================
	int coun=1;
	while(coun<=rowno){
		// cout<<'*'<<'\t';
		cout<<c<<'\t';
		a=b;
		b=c;
		c=a+b;

		coun=coun+1;//4
	}
	cout<<endl;
	rowno=rowno+1;//5
	// ========================

	}


	}

	// int a=0;
	// int b=1;

	return 0;
	// exit 0
}                 
             */