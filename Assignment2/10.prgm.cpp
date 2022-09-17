#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character:";
    cin>>ch;
    if(int(ch)>=65 && int(ch)<=90)
        cout<<"Upper Case";
    else if(int(ch)>=97 && int(ch)<=122)
        cout<<"Lower case";
    else
        cout<<"Special Symbol";
}
