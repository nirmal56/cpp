#include<iostream>
using namespace std;

class test {
    int x;
    public:
    void read(){
        cout<<"Enter a number:";
        cin>>x;
    }
    class EVEN{};
    class ODD{};
    void check(){
        if (x%2==0){
            throw EVEN();
        }
        else{
            throw ODD();
        }
    }
};

int main(){
    test t1;
    t1.read();
    try{
        t1.check();
    }
    catch(test::EVEN){
        cout<<"even"<<endl;
    }
    catch(test::ODD){
        cout<<"odd"<<endl;
    }
    return 0;
}