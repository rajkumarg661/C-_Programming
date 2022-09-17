#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rem,flag=0;
    cout<<"Enter Number to check wheather it is octal or not:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(rem>7)
        {
            cout<<"Not octal number";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"octal number";
}
