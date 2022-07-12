/*
  Given coefficients of a quadratic equation , you need to print the nature 
  of the roots (Real and Distinct , Real and Equal or Imaginary)and the roots.

   If Real and Distinct , print the roots in increasing order.
   If Real and Equal , print the same repeating root twice
   If Imaginary , no need to print the roots.

Note : Print only the integer part of the roots. 

Output contains one/two lines. First line contains nature of the roots .The next line contains roots(in non-decreasing order)
separated by a space if they exist. 
If roots are imaginary do not print the roots. Output the integer values for the roots.
                                                                                                    */

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,d,x1,x2;
cin>>a>>b>>c;

d=(b*b)-(4*a*c);


x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);


if(d>0)
{

	cout<<"Real and Distinct"<<endl;
	cout<<min(x1,x2)<<"  "<<max(x1,x2)<<endl;
}
if(d==0)
{
	
	
	cout<<"Real and Equal"<<endl;
	cout<<x1<<"  "<<x1<<endl;// both are equal roots
}
if(d<0)
{

	cout<<"Imaginary"<<endl;
	
}
return 0;
}




