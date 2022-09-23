#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,i,max_no;
    cout<<"Enter two number to get HCF:";
    cin>>a>>b;
    max_no=a<b?a:b;
    for(i=2;i<=max_no;i++)
    {
        if(a%i==0 && b%i==0)
        {
            printf("HCF is %d",i);
            break;
        }
    }
}
