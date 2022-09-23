#include<iostream>
#include<conio.h>
using namespace std;
void oct_bin(int);
int main()
{
    int n,rem;
    cout<<"Enter any number to get reverse of it:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
}
