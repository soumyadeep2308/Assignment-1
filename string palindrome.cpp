#include<iostream>
#include<conio.h>
#include <string.h>
using namespace std;
 
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    cout<<"Enter  the string : ";
    gets(s);
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    cout<<"string is palindrome";
    else
        cout<<"string is not palindrome";
 
 	 
	getch();
    return 0;
}
