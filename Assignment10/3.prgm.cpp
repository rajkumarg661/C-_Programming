#include<iostream>
using namespace std;
class Result
{
private:
    int resulted,total_attemp,net_right,net_wrong,m_right,m_wrong;
public:
    void set_result(int a,int r,int w,int mr=4,int mw=-1)
    {
        total_attemp=a;net_right=r;net_wrong=w;
        resulted=r*mr+w*mw;
    }
    void show_result()
    {
        cout<<"Your Result is>>>\n"<<"Total Attempted:"<<total_attemp<<" Right:"<<net_right<<" Wrong:"<<net_wrong<<" Result is::"<<resulted;

    }



};
int main()
{
    Result r1;
    r1.set_result(10,8,2);
    r1.show_result();
}
