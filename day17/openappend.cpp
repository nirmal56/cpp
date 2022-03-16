
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    char line[100];
    file.open("data.txt",ios::out | ios::app);

    if(file.fail()){
        cout<<"did nor open"<<endl;
    }
    else{
        cout<<"name"<<endl;
        cin.getline(line,100);
        file<<line<<endl;

        cout<<"age"<<endl;
        cin.getline(line,100);
        file<<line<<endl;
        file.close();
    }
    return 0;
}