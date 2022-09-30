#include<iostream>
#include<conio.h>
using namespace std;
int lcm(int,int);
int lcm(int a,int b)
{
    int larg=a>b?a:b;
    for(larg;larg<=a*b;larg++)
    {
        if(larg%a==0 && larg%b==0)
            return larg;
    }
}
int main()
{
    cout<<lcm(2,4);
}
