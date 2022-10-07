#include<iostream>
#include<conio.h>
using namespace std;
class arrays
{
private:
    int arr[10];
public:
    void inputArrayElement()
    {
        cout<<"Enter 10 element of array:";
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }
    int max_elements()
    {
        int max=arr[0];
        for(int i=0;i<10;i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        return max;
    }
    int min_elements()
    {
        int min=arr[0];
        for(int i=0;i<10;i++)
        {
            if(arr[i]<min)
                min=arr[i];
        }
        return min;

    }
    void edit_element(int index,int data)
    {
        arr[index]=data;
    }
    int sum_element()
    {
        int sum=0;
        for(int i=0;i<10;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
};
int main()
{
    arrays a1;
    a1.inputArrayElement();
    cout<<"\nLargest element is:"<<a1.max_elements();
    cout<<"\nsmallest element is:"<<a1.min_elements();
    cout<<"\nSum of array is:"<<a1.sum_element();

}
