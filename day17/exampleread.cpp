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
        f.open("student.dat",ios::app);
        s.getdata();
        f.write((char *)&s,sizeof(s));
        f.close();

    }

    void display(){
        fstream f;
        student s;
        char c;
        f.open("student.dat",ios::in|ios::binary);
        while(!f.eof()){
            f.read((char *) &s,sizeof(s));
            cout<<"roll:"<<s.roll<<"\t"<<"name:"<<s.name<<"\t"<<"marks:"<<s.marks<<endl;
        }
        f.close();
    }
};
int main(){
    student s;
    char ch='n';
    do{
        s.addrecord();
        cout<<"want to add more????(Y?N)"<<endl;
        cin>>ch;
    }
    while(ch=='y'|ch=='Y');
    s.display();
    cout<<"updated"<<endl;
}