#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
    int roll;
    char name[35];
    float marks;

    void getdata(){
        cout<< "enter roll number and name:"<<endl;
        cin>>roll>>name;
        cout<<"marks:"<<endl;
        cin>>marks;
    }
    void addrecord(){
        fstream f;
        student s;
        f.open("student.txt",ios::app);
        s.getdata();
        f.write((char *)&s,sizeof(s));
        f.close();

    }
};
int main(){
    student s;
    char ch='n';
    do{
        s.addrecord();
        cout<<"want to add more>??(Y?N)"<<endl;
        cin>>ch;
    }
    while(ch=='y'|ch=='Y');
    cout<<"updated";
}