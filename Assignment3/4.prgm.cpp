#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"How many even natural no u want?";
    cin>>n;
    while(n>0)
    {
        cout<<(2*n)-1<<endl;
        n--;
    }

}

