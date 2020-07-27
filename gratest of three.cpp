#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter first number :";
	cin>>n1;
	cout<<"Enter second number :";
	cin>>n2;
	cout<<"Enter third number :";
	cin>>n3;
	cout<<endl;
	int gt;
	gt=n1;
	if(n2>n1)
	{
		if(n3>n2)
		cout<<"Gratest number is :"<<n3;
		else
		cout<<"Gratest number is :"<<n2;
	}
	else if(n3>n1)
	{
		if(n2>n3)
		cout<<"Gratest number is :"<<n2;
		else
		cout<<"Gratest number is :"<<n3;
	}
	else
	cout<<"Gratest number is :"<<n1;
	
	getch();
	return 0;
}
