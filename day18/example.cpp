#include<iostream>

using namespace std;

template <class T1, class T2>
class sample{
    T1 a;
    T2 b;
    public:
    void getdata(){
        cout<<"Enter a and b:"<<endl;
        cin>>a>>b;
    }
    void display(){
        cout<<"the values:"<<endl;
        cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
    }
};
int main(){
    sample<int, int> s1;
    sample<int, double> s2;
    sample<double, double> s3;

    cout<<"integer data:"<<endl;
    s1.getdata();
    s1.display();

    cout<<"int and double data:"<<endl;
    s2.getdata();
    s2.display();

    cout<<"double and double data:"<<endl;
    s3.getdata();
    s3.display();
}