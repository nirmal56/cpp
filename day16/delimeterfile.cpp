#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream input;
    string s,s2;

    input.open("tab.txt");
    if(!input){
        cout<<"not opened"<<endl;
    }

    else{
        while(!input.eof()){
            input>>s>>s2;
            cout << s <<"\t"<<s2<<endl;
        }
    }
    input.close();
}