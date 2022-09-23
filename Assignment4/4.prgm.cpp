#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"Enter two number to get LCM:";
    cin>>a>>b;
    i=a>b?a:b;
    for(i;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM is %d",i);
            break;
        }
    }
}
