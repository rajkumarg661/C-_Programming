#include<iostream>
#include<conio.h>
using namespace std;
class time
{
private:
    int a,b,c;
public:
    void set_time(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void get_time()
    {
        cout<<a<<"Hr "<<b<<"Min "<<c<<"Sec";
    }
};

int main()
{
    time t1,t2;
    t1.set_time(2,4,5);
    t1.get_time();
}
