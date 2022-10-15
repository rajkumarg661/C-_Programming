#include<iostream>
#include<fstream>
using namespace std;
int count_words()
{
    ifstream fin;
    char ch;int countw=0;
    fin.open("file1.txt");
    if(!fin)
        cout<<"not found";
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            if(ch==32)
                countw++;
            ch=fin.get();
        }

    }
    fin.close();
    return countw;
}
int main()
{
    cout<<count_words();
}
