#include<iostream>
using namespace std;
class box
{
private:
    int l,b,h;
public:
    void setDimension(int p,int q,int r)
    {
        l=p;
        b=q;
        h=r;
    }
    void getDimension()
    {
        cout<<l<<" "<<b<<" "<<h;
    }
    box()
    {
        l=0;b=0;h=0;
    }
    box(int x,int y,int z)
    {
        l=x;b=y;h=z;
    }
    box(int all)
    {
        l=all;b=all;h=all;
    }
};
int main()
{
    box b1(2,4,8);
    b1.getDimension();
}
