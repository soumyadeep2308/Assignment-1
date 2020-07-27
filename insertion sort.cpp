#include<iostream>
#include<conio.h>
using namespace std; 
  
int main()  
{  
    int n,i,j,key; 
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n]; 
    cout<<"Enter the elements in the array :"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
  	 for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
  	
  	getch();
    return 0;  
}  
