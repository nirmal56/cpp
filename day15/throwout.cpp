#include<iostream>
using namespace std;

void xtest(int t){
    cout<<"inside test:test s:"<<t<<"\n";
    if(t){
        throw t;
    }
}

int main(){
    cout<<"Strat"<<endl;
    try{
        cout<<"inside try block:"<<endl;
        xtest(0);
        xtest(2);
        xtest(1);
    }
    catch(int i){
        cout<<"caught value is:"<<i<<endl;

    }
    cout<<"end"<<endl;
}