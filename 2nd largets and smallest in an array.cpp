#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j,pos,t;
	cout<<"Enter number of elements: ";
	cin>>n;
	int array[n];
	cout<<"Enter the elements inside the array :"<<endl;
	for(i=0;i<=n-1;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<=n-2;i++)
	{
		pos=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(array[pos]>array[j])
			{
				t=array[pos];
				array[pos]=array[j];
				array[j]=t;
				pos=j;
			}
		}
	}
	cout<<"Second largest : "<<array[n-2]<<endl;
	cout<<"Second smallest: "<<array[1];
	
	getch();
	return 0;
}
