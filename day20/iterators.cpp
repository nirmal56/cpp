#include<iostream>
#include<vector>

using namespace std;

int  main(){

    vector <char> v(15);
    vector <char> :: iterator p;
    int i;

    p=v.begin();
    i=0;
    while(p++ != v.end()){
        *p = i + 'a';
        i++;
    }
    cout<<"original contents but backwards:"<<endl;
    while(p != v.begin()){
        p--;
        cout<<*p<<"\t"; 
        //i--;
    }
    cout<<endl;

    p=v.begin();
    while( p != v.end()){
        *p = toupper(*p);
        p++;
    }

    cout<<"modified contents:"<<endl;
    p=v.begin();
    while( p != v.end()){
        p++;
        cout<<*p<<"\t";
    }
    cout<<endl;

    p = v.begin(); 
    p=p+3;
    v.insert(p,4,'Z');
    p = v.begin();  
    cout<<"modified contents:After Insertion"<<endl;

    p = v.begin();
    while( p != v.end()){
        p++;
        cout<<*p<<"  ";
    }
        cout<<*p<<"  ";
    cout<<endl;
/*
    v.erase(v.begin()+3,v.begin()+5); 

    p=v.begin();
    cout<<"modified contents:After erasing"<<endl;
    while( p++ != v.end()){
        cout<<*p<<"\t";
    }
    cout<<endl;

    v.erase(v.begin()); 

    p=v.begin();
    cout<<"modified contents:After erasing"<<endl;
    while( p++ != v.end()){
        cout<<*p<<"\t";
    }
    */
    cout<<endl;
return 0;
}