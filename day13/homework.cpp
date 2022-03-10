#include<iostream>
using namespace std;

class base{
    int i;
    public:
    int j,k;
    void seti(int x){
        i=x;
    }
    int geti(){
        return i;
    }
};

class derived:private base{
    public:

    // base::j;
    // base::seti;
    // base::geti;
    // base::i;
    int a;
};

int main(){
    derived ob;
    ob.i=10;
    
}