#include<iostream>
#include<map>
#include<string.h>

using namespace std;

class name{
    char str[40];
    public:
    name(){
        strcpy(str,"");
    }   
    name(char *s){
        strcpy(str,s);
    }
    char *get(){
        return str;
    }
};

bool operator<(name a, name b){
    return strcmp(a.get(), b.get())<0;
}

class phone{
    char str[80];
    public:
    phone(){
        strcpy(str,"");
    }
    phone(char *s){
        strcpy(str,s);
    }
    char *get(){
        return str;
    }
};

int main(){
    map<name,phone>dir;
    dir.insert(pair<name, phone>(name("emp1"),phone("1111111")));
    dir.insert(pair<name, phone>(name("emp2"),phone("2222222")));
    dir.insert(pair<name, phone>(name("emp3"),phone("3333333")));
    dir.insert(pair<name, phone>(name("emp4"),phone("4444444")));

    char str[80];
    cout<<"enter name:";
    cin>>str;
    map<name,phone>::iterator p;
    p=dir.find(name(str));
    if(p != dir.end()){
        cout<<"phone:"<<p->second.get()<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}

