#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"enter number to get factorial:";
    cin>>n;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"Factorial is "<<fact;
}



