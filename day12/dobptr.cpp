#include<iostream>
using namespace std;

class demo{
    int i;
public:
    demo(){}
    demo(int x){
        i=x;
    }
    int getdata(){
        cout<<i<<endl;
        return i;
    }
};

int main(){
    demo a(5);

    demo *d;
    d=&a;

    demo **s;
    s=&d;

    d->getdata();
    s->getdata();
    return 0;
}