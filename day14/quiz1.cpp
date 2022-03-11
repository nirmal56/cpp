#include<iostream>

using namespace std;

class A{
    public:
    void displayA(){
        cout<<"this is classA"<<endl;
    }
};
class B{
    public:
    void displayB(){
        cout<<"this is classB"<<endl;
    }
};
class C:public A{
    public:
    void displayC(){
        cout<<"this is classC"<<endl;
    }
};
class D:public B{
    public:
    void displayD(){
        cout<<"this is classD"<<endl;
    }
};


int main(){
    A a;B b;C c;D d;E e;F f;
    a.displayA();
    // b.displayA();
    // b.displayC();
    // b.displayD();

    f.displayA();
    f.displayC();
    f.displayB();
    f.displayE();

    e.displayA();
    e.displayB();
    e.displayC();

}
