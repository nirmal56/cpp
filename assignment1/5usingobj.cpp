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
            f.open("student.txt", ios::app|ios::binary)cd;
            stu.getdata();
            f.write((char*)&stu, sizeof(stu));
            f.close();
        }

        void display(){
            fstream f; 
            student stu;
            f.open("student.txt", ios::in|ios::binary);
            while(!f.eof()){ 
                f.read((char *)&stu, sizeof(stu));
                cout<<"ID: "<<stu.ID<<endl<<"student name: "<<stu.student_name<<endl<<"branch: "<<stu.branch<<endl<<"location: "<<location<<endl<<endl;
            }
            f.close();
        }

        void findFromID(string id){
            fstream f; 
            student stu;
            f.open("student.txt", ios::in|ios::binary);
            while(!f.eof()){ 
                f.read((char *)&stu, sizeof(stu));
                if(id==stu.ID){
                    cout<<"ID: "<<stu.ID<<endl<<"student name: "<<stu.student_name<<endl<<"branch: "<<stu.branch<<endl<<"location: "<<stu.location<<endl<<endl;
                }
            }
            f.close();
        }
};

int main(){
    student s1;
    char ch='n';

    int op;
    cout<<"enter 1 to add a data & 2 for display the data: "<<endl;
    try{
        cin>>op;
        if(op!=1 || op!=2){
            throw 'e';
        } 
    } 
    catch(char a){
        cout<<"Exception: please enter either 1 or 2 as an option"<<endl;
    }

    if(op==1){
        do{ 
            s1.AddRecord(); 
            cout<<"want to add more?(y/n)"<<endl;
            cin>>ch;
        } while(ch=='y'||ch=='Y');
    } 
    else if(op==2){
        cout<<"enter the ID to find: ";
        string id;
        cin>>id;
        s1.findFromID(id);
    }

    return 0;
}