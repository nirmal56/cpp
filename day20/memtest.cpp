#include<iostream>
using namespace std;
class abc{
    public:
    int roll;
    char gender, sam[10]; //1 + 10 = 11
    int age;
};


int main(){
    abc obj;
    obj.roll=20;
    obj.gender='m';
    obj.age=30;
    cout<<sizeof(obj)<<endl<<
    sizeof(obj.roll)<<endl<<
    sizeof(obj.gender)<<endl<<
    sizeof(obj.sam)<<endl<<
    sizeof(obj.age)<<endl;
}