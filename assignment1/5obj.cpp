#include <iostream>
#include <fstream>
using namespace std;

class student{
    public:
    string ID;
    string student_name;
    string branch;
    string location;

    void getdata(){
        cout<<"enter ID:"<<endl;
        cin>>ID;
        cout<<"enter student name"<<endl;
        cin>>student_name;
        cout<<"enter branch"<<endl;
        cin>>branch;
        cout<<"enter location"<<endl;
        cin>>location;
    }

    void AddRecord(){
        fstream f;
        student stu;
        f.open("student.txt", ios::app|ios::binary);
        stu.getdata();
        f.write((char*)&stu, sizeof(stu));
        f.close();
    }

    void display(){
        fstream f;
        student stu;
        f.open("student.txt", ios::in|ios::binary);
        while(!f.eof()){ //this while loop will print all the object present in the file
            f.read((char *) &stu,sizeof(stu));
            cout<<"ID: "<<stu.ID<<'\t'<<"student name: "<<stu.student_name<<'\t'<<"branch: "<<stu.branch<<'\t'<<"location: "<<stu.location<<endl;
        }
        f.close();
    }

    void findFromID(string id){
        fstream f;
        student stu;
        f.open("student.txt", ios::in|ios::binary);
        while(!f.eof()){ //this while loop will print all the object present in the file
            f.read((char *)&stu, sizeof(stu));
            cout<<"ID: "<<stu.ID<<endl<<"student name: "<<stu.student_name<<endl<<"branch: "<<stu.branch<<endl<<"location: "<<location<<endl;
        }
        f.close();
    }
};

int main(){
    student s1;
    char ch='n';

    int op;
    cout<<"enter 1 to add a data & 2 for display the data: "<<endl;
    cin>>op;

    if(op==1){
        do{
            s1.AddRecord(); //no need to call getdata() because AddRecord() will call getdata()
            cout<<"want to add more?(y/n)"<<endl;
            cin>>ch;
        } while(ch=='y'||ch=='Y');
    } 
    else{
        // cout<<"enter the ID to find: ";
        // string id;
        // cin>>id;
        s1.display();
    }

    cout<<"updated!!!"<<endl;

return 0;
}