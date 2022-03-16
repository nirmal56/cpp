/*1.count "the" in */

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
        for(int i=0;i<len;i++){
            c[i]=tolower(c[i]);
        }
        if(c == "the"){
            count++;
        }
    }
    cout<<"Total occurance of the is:"<<count<<endl;
    fp.close();
}