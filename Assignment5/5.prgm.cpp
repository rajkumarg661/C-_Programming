#include<iostream>
#include<conio.h>
using namespace std;
void prime_no(int,int);
void prime_no(int s,int t)
{
    int num,i,flag=0;
    for(s;s<t;s++)
    {
        for(i=2;i<s;i++)
        {
            if(s%i==0)
            {
                break;
            }
        }
        if(i==s)
            cout<<s<<"\n";
    }
}
int main()
{
    prime_no(2,100);
    return 0;
}

