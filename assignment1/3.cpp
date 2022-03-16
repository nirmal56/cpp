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
        
        // for(int i=0;i<len;i++){
            // int j=i-1;
            // cout<<i<<j<<endl;
            // if(c[i] == 'e' && c[j] == ' '){
            //     count++;
            // }
        // }
        if(c[0] == 'e'){
            count++;
        }
    }
    cout<<"Total occurance of word starting with 'e' is:"<<count<<endl;
    fp.close();
}