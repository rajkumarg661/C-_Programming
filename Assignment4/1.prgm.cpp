#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number to check prime or not";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Not prime");
            break;
        }
    }
    if(i==n)
        printf("Prime");
    getch();
}
