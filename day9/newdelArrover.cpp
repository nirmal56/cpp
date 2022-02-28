//overloading new[] and del[]

#include<iostream>
#include<stdlib.h>
 
using namespace std;
void * operator new(size_t size)
{
    cout << "----------New[] operator overloaded-------- " << endl;
    void * p = malloc(size);
    if(p == NULL){
        cout<<"could not allocate memory"<<endl;
        // exit();
    }   
    return p;
}
 
void operator delete(void * p)
{
    cout << "-----------Delete[] operator overloaded-------- " << endl;
    free(p);
}
 
int main()
{
    int n = 5, i;
    int * p = new int[3];
 
    for (i = 0; i<n; i++)
    p[i]= i;
 
    cout << "Array: ";
    for(i = 0; i<n; i++)
        cout << p[i] << " ";
         
    cout << endl;
 
    delete [] p;
}