#include<iostream>
using namespace std;
class Time
{
private:
    int hr,mint,sec;
public:
    void settime(int p,int q,int r)
    {
        hr=p;mint=q;sec=r;
    }
    void gettime()
    {
        cout<<hr<<"Hr "<<mint<<"min "<<sec<<"s\n";
    }
    void operator!()
    {
        if(hr!=0 || mint!=0 || sec!=0)
        {
            hr=0;mint=0;sec=0;
        }
        else
        {
            hr=1;mint=0;sec=0;
        }

    }


};
int main()
{
    Time t1,t2;
    t1.settime(2,4,5);
    t1.gettime();
    t1.operator!();
    t1.gettime();
    t1.operator!();
    t1.gettime();
}
