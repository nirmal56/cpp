#include<iostream>
using namespace std;
template <class X> void swapp(X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b =temp;
    cout<<"inside template"<<endl;
}

void swapp(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b =temp;
    cout<<"inside function specialization"<<endl;
}

int main(){
    int i=10,j=20;
    double x=10.1,y=20.2;
    char a='x',b='y';
    cout<<"Originals"<<endl;
    cout<<i<<"\t"<<j<<endl;
    cout<<"Originals"<<endl;
    cout<<x<<"\t"<<y<<endl;
    cout<<"Originals"<<endl;
    cout<<a<<"\t"<<b<<endl;
    swapp(i,j);
    swapp(x,y);
    swapp(a,b);
    cout<<"Swappped"<<endl;
    cout<<i<<"\t"<<j<<endl;
    cout<<"Swappped"<<endl;
    cout<<x<<"\t"<<y<<endl;
    cout<<"Swappped"<<endl;
    cout<<a<<"\t"<<b<<endl;
}