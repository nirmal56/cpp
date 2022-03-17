#include<iostream>
using namespace std;
template<class T>

class addition{
    public:
    T add(T n1,T n2){
        T res;
        res = n1+n2;
        return res;
    }
};

int main(){
    addition<int> ob1;
    addition<long> ob2;
    int a=10,b=20,c;
    long A=11,B=22,C;
    c=ob1.add(a,b);
    C=ob2.add(A,B);
    cout<<c<<endl;
    cout<<C<<endl;
}