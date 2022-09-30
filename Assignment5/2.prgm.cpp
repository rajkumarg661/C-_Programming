#include<iostream>
using namespace std;
int even_odd(int);
int even_odd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<even_odd(n);
}
