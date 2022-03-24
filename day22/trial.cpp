#include<iostream>
#include<vector>

using namespace std;

int  main(){

    vector <int> v(15);
    vector <int> :: iterator p;
    int i;
    
    p=v.begin();
    i=0;
    while(p++ != v.end()){
        *p = i+1 ;
        i++;
    }

    cout<<"contents:"<<endl;

    p = v.begin();
    while( p != v.end()){
        p++;
        cout<<*p<<'\t';
    }
    cout<<endl;
    cout<<endl;


    p = v.begin(); 
    p=p+3;
    v.insert(p,4,99);
    p = v.begin();  
    cout<<"modified contents:After Insertion"<<endl;

    p = v.begin();
    while( p != v.end()){
        p++;
        cout<<*p<<'\t';
    }
    cout<<endl;
    cout<<endl;
return 0;
}