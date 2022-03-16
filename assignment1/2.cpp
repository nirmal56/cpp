/*2.count words which have 'a' in it.*/

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

int main(){
    fstream fp;
    string c;

    bool flag;
    int len,count=0;

    fp.open("file1.txt");

    while(!fp.eof()){
        fp>>c;
        flag=true;
        len=c.length();
        
        for(int i=0;i<len;i++){
            if(c[i] == 'a' && flag){
                count++;
                flag = false;
            }
        }
    }
    cout<<"Total occurance of word with 'a' is:"<<count<<endl;
    fp.close();
}