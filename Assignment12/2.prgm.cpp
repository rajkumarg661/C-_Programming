#include<iostream>
using namespace std;
class Time
{
private:
    int hr,mint,sec;
public:
    void set_time(int h,int m,int s)
    {
        hr=h;mint=m;sec=s;
    }
    void get_time()
    {
        cout<<hr<<"Hr "<<mint<<"min "<<sec<<"s\n";
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.hr=hr+t.hr;
        temp.mint=mint+t.mint;
        temp.sec=sec+t.sec;
        return temp;
    }
    Time operator-(Time t)
    {
        Time temp;
        temp.hr=hr-t.hr;
        temp.mint=mint-t.mint;
        temp.sec=sec-t.sec;
        return temp;
    }
    bool operator>(Time t)
    {
        if(hr==t.hr && mint==t.mint && sec==t.sec)
            return true;
        else
            return false;
    }

};
int main()
{
    Time t1,t2,t3,t4;
    t1.set_time(3,44,45);
    t2.set_time(3,44,45);
    t3=t1+t3;
    t3.get_time();
    t4=t1-t2;
    t4.get_time();
    cout<<(t1>t2);
}
