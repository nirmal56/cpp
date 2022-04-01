/*There are two processes, A and B, that can access a common variable x. They can access it in
sequence, A first and then B, or B first then A. But in one day they access it only once. A logbook is
maintained by the OS showing which process accessed x when.

You got a series of entries of the log, but you want to make sure that this log has not been
altered by anyone. Your output is the answer to the question: Is the log valid or not?
Ex: Input: AB, output: Yes
Input: ABAABB, output: No*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string x;
    cout<<"Enter log:"<<endl;
    cin>>x;
    bool flag=true;

    int len;
    char leta='A',letb='B';
    len = x.length();
    if(x[0] == 'A'){
        for (int i=0;i<len;i+=2){
            if(x[i] == 'A' && (x[i+1]=='B')){
                flag = true;
            }
            else{
                flag =false;
            }
        }
    }
    else if(x[0] == 'B'){
        for (int i=0;i<len;i+=2){
            if(x[i] == 'B' && (x[i+1]=='A')){
                flag = true;
            }
            else{
                flag =false;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else if(!flag)
        cout<<"NO"<<endl;
}