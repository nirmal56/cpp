#include <iostream>
#include <fstream>
using namespace std;

class student{
    public:
    char ID[50];
    char student_name[50];
    char branch[50];
    char location[50];

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
        bool flag=true;
        f.open("student.txt", ios::in|ios::binary);
        while(!f.eof()){ //this while loop will print all the object present in the file
            f.read((char *)&stu, sizeof(stu));
            if(stu.ID == id){
                flag = true;
                cout<<"ID: "<<stu.ID<<endl<<"student name: "<<stu.student_name<<endl<<"branch: "<<stu.branch<<endl<<"location: "<<stu.location<<endl<<endl;
            }
            try{
                if(stu.ID != id){
                    throw(-1);
                }
            }
            catch (int a){
                if(a == -1){
                    flag = false;
                }
            }
        }
        if(!flag)
            cout<<"STUDENT DOES NOT EXIST"<<endl;
        f.close();
    }
};

int main(){
    student s1;
    char ch='n';

    int op;
    do{
        cout<<"enter 1 to add a data & 2 for display the data && 3 to exit: "<<endl;
        cin>>op;
        if(op==1){
            s1.AddRecord(); 
        } 
        else if(op == 2){
            cout<<"enter the ID to find: ";
            string id;
            cin>>id;
            s1.findFromID(id);
        }
    }while(op!=3);

return 0;
}