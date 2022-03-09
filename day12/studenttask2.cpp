#include<iostream>
#include<string>
using namespace std;

class student {
    int marks;
    string name;
    public:
    int roll;

    void getData(int marks,int roll,string name){
        this->marks=marks;
        this->roll=roll;
        this->name=name;
    }
      void printData(){
        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<roll<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};

class stu: public student{
    public:
    void print(){
        printData();
    }

};

int main(){
    stu s[3];
    stu *ptr;
    ptr=s;
    ptr->getData(80,20,"nirmal");
    ptr++;
    ptr->getData(90,21,"om");
    ptr++;
    ptr->getData(100,19,"axay");
    ptr++;

    ptr = &s[0];

    for(int i=1;i<4;i++){
        ptr->printData();
        ptr++;
    }

}