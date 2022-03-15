#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream input;
    string s;
    int count;

    input.open("tab.txt");
    if(!input){
        cout<<"not opened"<<endl;
    }

    else{
        while(!input.eof()){
            input>>s;
            count++;
        }
    }
    cout<<"tital Words are:"<<count<<endl;
    input.close();
}