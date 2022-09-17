#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter two number:";
    cin>>n;
    if(n>0)
        cout<<n<<" is positive";
    else if(n==0)
        cout<<n<<" is Zero";
    else
        cout<<n<<" is Negative";
}
