#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream outfile;
    outfile.open("data.txt",ios::out|ios::ate);
    outfile<<"this is my file."<<endl;
    outfile<<"this is line 2."<<endl;
    outfile<<"this is line 3."<<endl;
    
    long pos = outfile.tellp();
    outfile.seekp(pos+6);
    outfile<<"again in file"<<endl;

    outfile.seekp(-7,ios::cur);
    outfile<<"data data data"<<endl;

    outfile.seekp(7,ios::beg);
    outfile<<"NO NO NO"<<endl;
    
    outfile.close();
    cout<<"done\n";
    return 0;
}