/*
                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4
                              3 2 1 0 1 2 3
                                2 1 0 1 2
                                  1 0 1
                                    0
                                  1 0 1
                                2 1 0 1 2
                              3 2 1 0 1 2 3
                            4 3 2 1 0 1 2 3 4
                          5 4 3 2 1 0 1 2 3 4 5      */

#include <iostream>
using namespace std;
int main(){ //start
	int N;
	cin>>N;

if(N>=0 && N<=20)
{
	int rowno=1;

	while(rowno<=(N+1))
	{
     	int spacescount=1;
	while(spacescount<=rowno-1)
	{
		cout<<"  ";
		spacescount++;
	}
	 
	 int countfirstdec=1;
	int startvaldec=(N-rowno)+1;
	while(countfirstdec<=(N-rowno)+2)
	{
		cout<<startvaldec<<" ";
		startvaldec--;
		countfirstdec++;
	}
	
	int incount=1;
	int startvalin=1;
	while(incount<=(N-rowno)+1)
	{
		cout<<startvalin<<" "; 
		startvalin++;
		incount++;
	}

	cout<<endl;
	rowno=rowno+1;
	}
	
	while(rowno>(N+1) && rowno<=(2*N+1))
	{
     	int spacescount=1;
	while(spacescount<=(2*N+1)-rowno)
	{
		cout<<"  ";
		spacescount=spacescount+1;
	}
	 
	 int countfirstdec=1;
	int startvaldec=rowno-(N+1);
	while(countfirstdec<=rowno-N)
	{
		cout<<startvaldec<<" ";
		startvaldec=startvaldec-1;
		countfirstdec=countfirstdec+1;
	}
	
	int incount=1;
	int startvalin=1;
	while(incount<=rowno-(N+1))
	{
		cout<<startvalin<<" "; 
		startvalin=startvalin+1;
		incount=incount+1;
	}

	cout<<endl;
	rowno=rowno+1;
	}
}
else{
    return 0;
}
	
	return 0;
}
