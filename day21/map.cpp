#include<iostream>
#include<map>
using namespace std;
int main(){
    map <char,int> m;
    int i;

    for(i=0;i<26;i++){
        m.insert(pair<char,int>('A'+i,65+i));
    }
    char ch;
    cout<<"enter key upppercase:";
    cin>>ch;
    map<char,int>::iterator p;

    p=m.find(ch);
    if(p!=m.end()){
        cout<<"Ascii is:"<<p->second;
    }
    else{
        cout<<"key is not in map"<<endl;
    }
}