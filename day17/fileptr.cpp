#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char buf[100];
    fstream fp;
    fp.open("data.txt",ios::out|ios::ate);
    fp<<"this is my file."<<endl;
    fp<<"this is line 2."<<endl;
    fp<<"this is line 3."<<endl;
    
    long pos = fp.tellp();
    fp.seekp(pos+6);
    fp<<"again in file"<<endl;

    fp.seekp(-7,ios::cur);
    fp<<"data data data"<<endl;

    fp.seekp(7,ios::beg);
    fp<<"NO NO NO"<<endl;

    fp<<"hello world"<<endl;
    
    fp.close();
    cout<<"done\n";

    fp.open("data.txt");
    cout<<"reading fiiel"<<endl;

    fp.seekg(0);
    while(fp.getline(buf,100))
        cout<<buf<<endl;
    pos=fp.tellg();
    cout<<"pos pointer is "<<pos<<endl;
    return 0;
}