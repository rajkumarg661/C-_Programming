#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter length of side of triangle:";
    cin>>a>>b>>c;
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
        cout<<"Triangle is Right Angle Triangle";
    else
    cout<<"Not Right angle Triangle";
}
