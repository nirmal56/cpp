#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream input;
    string s;

    input.open("abc.txt");
    if(!input){
        cout<<"not opened"<<endl;
    }

    else{
        while(!input.eof()){
            input >> s;
            cout << s <<" ";
        }
    }
    input.close();
}