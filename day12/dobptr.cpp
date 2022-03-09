#include<iostream>
using namespace std;

class demo{
    int i;
public:

    demo(int x){
        i=x;
    }
    int getdata(){
        return i;
    }
};

int main(){
    demo a(5);
    demo *d=a;
    // demo **s=d;

    d->getdata();
    // s->getdata();
    return 0;
}