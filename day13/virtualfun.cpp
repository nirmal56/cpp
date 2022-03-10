#include<iostream>

using namespace std;

class shape{
    protected:
    float x;
    public:
    void getdata(){
        cin>>x;
    }
    virtual float calculateArea()=0;
};

class square : public shape{
    public:
    float calculateArea(){
        return x*x;
    }
};

class circle : public square{
    public:
    float calculateArea(){
        return x*x;
    }
};

int main(){
    // shape s1;
    square s2;

    square *ptr;

    circle c;
    
    s2.getdata();
    cout<<s2.calculateArea()<<endl;

//    ptr = (square *)&c;
    ptr = &c;

    ptr->getdata();
    cout<<ptr->calculateArea();
}