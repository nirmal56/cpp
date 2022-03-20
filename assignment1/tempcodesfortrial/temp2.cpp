#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
    string id,name,branch,location;
    fstream fp;

    student(){

    }

    void getdata(){   

        fp.open( "file.txt", ios::app | ios::in | ios::out);
       
        cout<<"enter ID:";
        cin>>id;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter branch:";
        cin>>branch;
        cout<<"enter location:";
        cin>>location;

        fp<<id + " " + name + " " + branch + " " + location + '\n';
    }

    void display(string k){
        fstream fp;
        student s;
        string id;
        char buf[50];

        fp.open( "file.txt", ios::app | ios::in | ios::out);

        while(!fp.eof()){
            fp>>id;

            if(k == id){
                fp.getline(buf,50);
                cout << k << buf << endl;
            }
        }
    }
};

int main(){
    student s;
    string id;
    int choice;

    cout<<"1 to add data 2 to fetch from id:"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>choice;

    if(choice==1){
        s.getdata();
    }
    
    else if(choice == 2){
        cout<<"which id?"<<endl;
        cin>>id;
        s.display(id);
    }
   
    return 0;
}