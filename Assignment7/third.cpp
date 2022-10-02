#include<iostream>
#include<conio.h>
using namespace std;
class box
{
private:
    int l,h,th;
    public:
    void set_box(int a,int b,int c)
    {
        l=a;
        h=b;
        th=c;
    }
    void get_box()
    {
        cout<<"Length is"<<l<<"\nheight is"<<h<<"\nbreadth is"<<th;
    }
    int volume()
    {
        return l*h*th;
    }
};
int main()
{
    box b1,b2;
    b1.set_box(2,4,8);
    b1.get_box();
    cout<<"\nVolume is "<<b1.volume();
}
