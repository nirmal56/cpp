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

int main(){
    student s[3];
    student *ptr;
    ptr=s;
    // ptr->getData(80,20,"nirmal");
    // ptr->printData();
    // ptr++;
    // ptr->getData(90,21,"om");
    // ptr->printData();
    // ptr++;
    // ptr->getData(100,19,"axay");
    // ptr->printData();
    // ptr++;
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