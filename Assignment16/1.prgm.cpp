#include<iostream>
#include<fstream>
using namespace std;
void read_write()
{
    ifstream fin; ofstream fout;
    string ch;
    fin.open("file1.txt");
    fout.open("file2.txt");
    if(!fin)
        cout<<"file not found";
    else
    {
        ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    }
    fout.close();
    fin.close();
}
int main()
{
    read_write();
}
