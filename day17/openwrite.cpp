#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ofile;
    ofile.open("data.txt");
    ofile<<"line on in the document"<<endl;
    ofile<<"anohter ljne"<<endl;

    cout<<"to the terminal"<<endl;
    ofile.close();
    return 0;
}