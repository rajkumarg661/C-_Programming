#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter coefficient of x^2 x and constant value:";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>=0)
        cout<<"Real Root";
    else
        cout<<"Imaginary Root";
}
