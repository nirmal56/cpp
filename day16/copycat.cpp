#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream input,output;
    char s;

    input.open("tab.txt");
    output.open("abc.txt",ios::app);

    if(!input){
        cout<<"not opened"<<endl;
    }

    else{
        while(!input.eof()){
            input.get(s);
            output<<s;
        }
    }
    input.close();
}