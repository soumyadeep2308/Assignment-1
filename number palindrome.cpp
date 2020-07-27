#include<iostream>
#include <conio.h>
using namespace std;

int main() 
{
    int n, reversed = 0, remainder, original;
    cout<<"Enter an integer: ";
    cin>>n;
    original = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (original == reversed)
        cout<<"is a palindrome."<<original;
    else
        cout<<"is not a palindrome."<<original;
	
	getch();
    return 0;
}
