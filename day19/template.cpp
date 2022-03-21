#include<iostream>
using namespace std;

template <class T1>

void sum (T1 a,T1 b,T1 c){
    cout<<"sum: "<< a+b+c <<endl;
}

template <class T1, class T2>

void sum(T1 a,T2 b,T1 c){
    cout<<"sum: "<< a+b+c <<endl;
}

void sum(int a,int b,int c){
    cout<<"sum: "<< a+b+c <<endl;
}

int main(){
    int a,b;
    float x,y,z;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    cout<<"Enter three floats"<<endl;
    cin>>x>>y>>z;
    sum(x,y,z);
    sum(a,b,a);
    sum(a,x,b);
}