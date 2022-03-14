#include<iostream>
using namespace std;

void demo()throw(int,double){
    int a=2;
    a=1.5;
    if(a==1)
        throw a;
    else if(a==2)
        throw 'A';
    else if(a==3)
        throw 1.5;
    else
        throw 1;
}

int main(){
    try{
        demo();
    }
    catch(int n){
        cout<<"\nexcepttion caught:"<<n<<endl;
    }
    cout<<"End of program"<<endl;
}