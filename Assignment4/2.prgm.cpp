#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int s,t,i,j;
    cout<<"Enter starting and ending point:";
    cin>>s>>t;
    for(i=s;i<=t;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        printf("\n%d",i);
    }
}
