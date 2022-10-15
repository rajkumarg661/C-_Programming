#include<iostream>
#include<fstream>
using namespace std;
void search_words()
{
    ifstream fin;
    string ch;
    fin.open("file1.txt");
    if(!fin)
        cout<<"not found";
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            if(ch=="hi")
                {
                cout<<"myself";
                break;}
            else
            ch=fin.get();
        }

    }
    fin.close();
}
int main()
{
    search_words();
}
