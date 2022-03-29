#include<iostream>
#include<vector>

using namespace std;

int  main(){

    vector <char> v(10);
    vector <char> :: iterator p;
    int i;

    p=v.begin();
    i=0;
    while(p != v.end()){
        *p = i + 'a';
        i++;
        p++;
    }
    cout<<"original contents but backwards:"<<endl;

    p=v.begin();
    while(p != v.end()){
        cout<<*p<<"\t";
        i++;
        p++;
    }
    cout<<endl;


    v.insert(v.begin(),3,'Z');
    cout<<"modified contents:After Insertion"<<endl;

    p=v.begin();
    while( p != v.end()){
        cout<<*p<<"\t";
        p++;
    }
    cout<<endl;

}