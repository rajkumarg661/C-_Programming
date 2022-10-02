#include<iostream>
#include<conio.h>
using namespace std;
class complexe
{
private:
    int a,b;
public:
    void setv(int x,int y)
    {
        a=x;b=y;
    }
    void getv()
    {
        cout<<a<<" "<<b;
    }
}c1;
int main()
{
    complexe c2;
    c1.setv(7,8);
    c1.getv();
    c2.getv();
}
