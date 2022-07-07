/*
          *****
         *   *
        *   *
       *   *
      *****
                           */

#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n; //5
	int rowno=1;
	int spacecount=1;

// loop
	while(spacecount<=n-1){
		cout<<" ";
		spacecount++;//2 dusri space print karo
	}

	int countstar=1;
	while(countstar<=n){ //6<=5
		cout<<"*";
		countstar++;//6
	}

	cout<<endl;

	rowno=rowno+1; //2
// loop
	while(rowno<=n-1){//5<=4
		// spaces 

	int spaccount=1;

// loop
	while(spaccount<=n-rowno){
		cout<<" ";
		spaccount++;//4

	}
	// 1 star
	cout<<'*';

	// spaces n-2 times 
	int spacecount=1;
	while(spacecount<=n-2){
		cout<<" ";
		spacecount++;
	}
	cout<<'*'<<endl;

	rowno=rowno+1;//5


	}

	// n starts print
	int count=1;
	while(count<=n){
		cout<<"*";
		count=count+1;
	}
	cout<<endl;

	return 0;
} 