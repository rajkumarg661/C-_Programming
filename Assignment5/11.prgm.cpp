#include<iostream>
#include<conio.h>
using namespace std;
int hcf(int,int);
int hcf(int a,int b)
{
    int i=2,flag=0;
    int small=a<b?a:b;
    for(i=2;i<=small;i++)
    {
        if(a%i==0 && b%i==0){
            flag=1;
            return i;}
    }
    if(flag==0)
        return 1;
}
int main()
{
    cout<<hcf(3,11);
}
