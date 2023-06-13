/// Program to demonstrate Parameter Passing
#include<iostream>
using namespace std;

void swap(int &x,int &y);/// Prototype
int main()
{	int n1,n2;

 	cout<<"\nENTER TWO ELEMENTS FOR SWAPPING \" CALL BY VALUE MECHANISM \n";
	cin>>n1>>n2;
 	cout<<"\nBEFORE SWAPPING\nNUMBER 1 :"<<n1<<"\nNUMBER 2 : "<<n2;
 	swap(n1,n2);
 	cout<<"\n\nIN MAIN AFTER SWAPPING\nNUMBER 1 : "<<n1<<"\nNUMBER 2 : "<<n2;

	return(0);
}
void swap(int &x,int &y)
{	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"\n\nIN SWAP\nNUMBER 1 : "<<x<<"\nNUMBER 2 : "<<y;
}
