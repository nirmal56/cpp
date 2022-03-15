#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream input;
    string s;
    int count;

    input.open("tab.txt");
    if(!input){
        cout<<"not opened"<<endl;
    }

    else{
        while(getline(input,s)){
            cout << s <<endl;
            count++;
        }
    }
    cout<<"tital lines are:"<<count<<endl;
    input.close();
}