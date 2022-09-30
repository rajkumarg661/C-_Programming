#include<iostream>
#include<conio.h>
using namespace std;
void fibon(int);
void fibon(int n)
{
    int i=0,t1=-1,t2=1,t3;
    while(i<n)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        i++;
        cout<<t3<<endl;
    }

}
int main()
{
    fibon(10);
}

