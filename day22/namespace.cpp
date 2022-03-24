#include<iostream>
using namespace std;

namespace my{
    int uprbound;
    int lwrbound;
    class counter{
        int count;
        public:
        counter(int n){
            if(n<uprbound)
                count = n;
            else
                count = uprbound;
        }
        void reset(int n){
            if(n<uprbound)
                count=n;
        }
        int run(){
            if(count > lwrbound)
                return count--;
        }
    };
}

int main(){
    my::uprbound =100;
    my::lwrbound =0;

    my::counter ob1(10);
    int i;
    do{
        i=ob1.run();
        cout<< i << " ";
    }while(i>my::lwrbound);
    cout<<endl;

    my::counter ob2(20);
    do{
        i=ob2.run();
        cout<< i << " ";
    }while(i>my::lwrbound);
    cout<<endl;
    ob2.reset(100);

    my::lwrbound =90;
    do{
        i=ob2.run();
        cout<<i<<" ";
    }while(i>my::lwrbound);
    cout<<endl;
    return 0;

}