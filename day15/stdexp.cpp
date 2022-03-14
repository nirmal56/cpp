#include<iostream>
#include<exception>
using namespace std;

int main(){
    try{
        int *myarr = new int[10000000000];
        // for(int i=0;i<1000;i++)
        //     myarr[i]=1;
        // myarr[1000000]=1;
    }
    catch(exception e){
        cout<<"std exception"<<e.what()<<endl;
    }
    return 0;
}
