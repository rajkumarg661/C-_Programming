#include<iostream>
using namespace std;
class time
{
private:
    int hr,mint,sec;
public:
    void set_time(int h,int m,int s)
    {
        hr=h;
        mint=m;sec=s;
    }
    void get_time()
    {
        if(sec>60)
        {
            mint++;
            sec=sec-60;
        }

        if(mint>60)
        {
            hr++;
            mint=mint-60;
        }
        cout<<hr<<"Hr "<<mint<<"Min "<<sec<<"s\n";
    }
    time add(time t)
    {
        time temp;
        temp.hr=hr+t.hr;
        temp.mint=mint+t.mint;
        temp.sec=sec+t.sec;
        return temp;
    }




};
int main()
{
    time t1,t2,t3;
    t1.set_time(2,34,30);
    t2.set_time(4,25,31);
    t1.get_time();
    t2.get_time();
    t3=t1.add(t2);
    t3.get_time();
}
