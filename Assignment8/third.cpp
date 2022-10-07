#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
    public:
    int id;
    char name[30];
    float salary;
    void set_empvalue()
    {
        cin>>id;
        cin.ignore();
        cin.getline(name,30);
        cin>>salary;
    }
    void get_empvalue()
    {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }


}e[5];
void sortbysalary(employee d[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(d[j].salary>d[i].salary)
            {
                float sal;
                sal=d[i].salary;
                d[i].salary=d[j].salary;
                d[j].salary=sal;
            }
        }
    }
}


int main()
{

    for(int i=0;i<5;i++)
    {
        e[i].set_empvalue();
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        e[i].get_empvalue();
    }
    cout<<endl;
    sortbysalary(e);
    for(int i=0;i<5;i++)
    {
        e[i].get_empvalue();
    }



}
