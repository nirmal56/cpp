/*3.count number of word starting with 'e'*/

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

int main(){
    fstream fp;
    string c;

    int len,count=0;

    fp.open("file1.txt");

    while(!fp.eof()){
        fp>>c;
        len=c.length();
        
        if(c[0] == 'e'){
            count++;
        }
    }
    cout<<"Total occurance of word starting with 'e' is:"<<count<<endl;
    fp.close();
}