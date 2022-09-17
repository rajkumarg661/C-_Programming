#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number to check wheather it is divisible by 7 or not:";
    cin>>n;
    if(n%7==0)
    {
        cout<<n<<" is divisible by 7";
    }
    else
        cout<<n<<" is not divisible by 7";
}
