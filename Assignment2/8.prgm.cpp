#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int y;
    cout<<"enter any year to check wheather it is leap ot not:";
    cin>>y;
    if(y%4==0)
    {
        if(y%100!=0)
            cout<<"leap";
        else
            cout<<"not leap";
    }
}
