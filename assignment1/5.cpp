#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string ID;
    string student_name;
    string branch;
    string location;

    string temp;
    string return_res;

    int option;

    fstream file;
    file.open("sample.txt", ios::app|ios::in);

    try{
        try{
            if(file){
                cout<<"opening a file"<<endl;
            } else{
                throw 1;
            }
        }
        catch(int a){
            cout<<"Exception: can't open the file"<<endl;
        }
        
        cout<<"enter 1 to add a new student"<<endl<<"enter 2 to find a student with ID"<<endl<<"enter the input: ";
        cin>>option;
        if(option==1){
            cout<<endl<<"enter the ID: ";
            cin>>ID;

            cout<<endl<<"enter the student name: ";
            cin>>student_name;

            cout<<endl<<"enter the branch: ";
            cin>>branch;

            cout<<endl<<"enter the location: ";
            cin>>location;

            string whole_line = ID + " " + student_name + " " + branch + " " + location;
            cout<<"data added: "<<whole_line<<endl;

            file << whole_line << endl;
        } else if(option==2){
            cout<<"enter the ID: ";
            cin>>ID;

            while(!file.eof()) {
                file>>temp;
                if(temp==ID){
                    getline(file, return_res); //this will copies the content(line by line) of file to a temp variable
                    cout<<"\nresult-> "<<ID<<return_res<<endl;
                }
            }
        } else{
            throw 'a';
        }
        } catch(char e){
            cout<<"Exception: please enter either option = 1 or 2"<<endl;
        }
        file.close();
    return 0;
}