#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream myf;

    myf.open("abc.txt",ios::in);

    if(!myf){
        cout<<"not opened"<<endl;
    }

    else{
        cout<<"opend"<<endl;
    }
}
