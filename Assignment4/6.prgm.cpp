#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i=0,rem;
    cout<<"Enter any number:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(rem>i)
            i=rem;
    }
    printf("%d",i);
}
