#include<iostream>
using namespace std;

class convert {
    protected:
    double val1;
    double val2;

    public:
    convert(double i){
        val1=i;
    }
    double getconv(){
        return val2;
    }
    double getinit(){
        return val1;
    }
    virtual void compute()=0;
};

class itog:public convert{
public:
    itog(double i):convert(i){}

    void compute(){
        val2 = val1/3.7845;
    }
};

class ftoc:public convert{
public:
    ftoc(double i):convert(i){}

    void compute(){
        val2 = (val1-32)*1.8;
    }
};


int main(){
    convert *p;
    itog ob1(4);
    ftoc ob2(70);

    p= &ob1;
    cout<<p->getinit()<<"liter is:";
    p->compute();
    cout<<p->getconv()<<"gallons\n";

    p=&ob2;
    cout<<p->getinit()<<"faren is:";
    p->compute();
    cout<<p->getconv()<<"cel\n";
    

}