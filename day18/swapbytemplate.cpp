#include<iostream>

using namespace std;

template <typename s1,typename s2>
void swapp (s1 *a,s2 *b){
    s1 temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=10,b=20;
    double c=10.0012,d=20.56;
    char n1='s',n2='h';
    string a1="ni",b1="rmal";
    int e=10;
    double f=20.23;

    cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
    swapp(&a,&b);
    cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl<<endl;

    cout<<"c:"<<c<<"\t"<<"d:"<<d<<endl;
    swapp(&c,&d);
    cout<<"c:"<<c<<"\t"<<"d:"<<d<<endl<<endl;

    cout<<"e:"<<e<<"\t"<<"f:"<<f<<endl;
    swapp(&e,&f);
    cout<<"e:"<<e<<"\t"<<"f:"<<f<<endl<<endl;

    cout<<"n1:"<<n1<<"\t"<<"n2:"<<n2<<endl;
    swapp(&n1,&n2);
    cout<<"n1:"<<n1<<"\t"<<"n2:"<<n2<<endl<<endl;

    cout<<"a1:"<<a1<<"\t"<<"b1:"<<b1<<endl;
    swapp(&a1,&b1);
    cout<<"a1:"<<a1<<"\t"<<"b1:"<<b1<<endl<<endl;


    // cout<<"a:"<<a<<"\t"<<"b1:"<<b1<<endl;
    // swapp(&a,&b1);
    // cout<<"a:"<<a<<"\t"<<"b1:"<<b1<<endl<<endl;
}