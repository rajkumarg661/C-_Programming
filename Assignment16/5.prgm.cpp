#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Book
{
private:
    int id;
    char title[20];
    double price;
public:
    void inputBook(int i,char* t,double p)
    {
        id=i;
        strcpy(title,t);
        price=p;
    }
    void showBook()
    {
        cout<<"\nid:"<<id<<"\tTitle:"<<title<<"\tprice:"<<price;
    }
    void storeBook()
    {
        ofstream fout;
        fout.open("Bookfile.txt",ios::app|ios::binary);
        fout.write((char*) this,sizeof(*this));
        fout.close();}

    void viewbooks()
    {
        ifstream fin;
        fin.open("Bookfile.txt",ios::app|ios::binary);
        if(!fin)
            cout<<"not found";
        else
        {
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof())
            {
                showBook();
                fin.read((char*)this,sizeof(*this));
            }

        }
        fin.close();
    }
};
int main()
{
    Book b1;
    b1.inputBook(1,"dbms",250);
    b1.storeBook();
    b1.inputBook(2,"c++",350);
    b1.storeBook();
    b1.viewbooks();
}
