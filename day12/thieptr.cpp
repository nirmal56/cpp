#include<iostream>
using namespace std;

class sample{
    int a;
    public:
    void input(int a){
        this->a=a;
    }
    void dis(){
        cout<< a <<endl;
    }
};
int main(){
    sample s;
    int a=8;
    s.input(a);
    s.dis();
    return 0;
}