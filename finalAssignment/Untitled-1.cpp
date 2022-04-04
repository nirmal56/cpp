/*
Q3: You have a binary string with length N. You are allowed to do swap() operations of two elements
only if the index parity of both elements is the same. This means that: you can swap() an element at
index 2, with any element at index 4, 6, 8 etc. (even parity), similarly the element at index 3 can be
swapped with the element at index1, 5,7,9 etc.
Ex: Given string 1110, you can swap 2 nd and 4 th char to get 1011. But, you can never get 1101 if you
follow the swap rules.
Now, the task is to find the number of times substring 01 can occur for all such possible swaps.

Ex: 1110 does not have any substring of 01. Now you can swap2nd and 4 th to get 1011, this will have
‘one’ occurrence of 01. We can now perform more swaps but we will never get any more 01
substrings here.
Input: 00100 output should be 1, for: 01010->2, for 10001->2
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int len;
    len=str.length();
    int myarray[len];
    int mynewarr[len];
    int counter=0;

    for (int i=0;i<len;i++){
        //convertinf my string in array by typeconversion &ascii values.
        myarray[i] =((int) str[i]) - 48;
    }
    for (int i=0;i<len;i++){
        mynewarr[i] =myarray[i];
    }
    
    for(int i=0;i<len;i++){
        cout<<myarray[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<len;i++){
        cout<<mynewarr[i]<<"\t";
    }
    cout<<endl;
    
    if(len % 2 == 0){
        len = (len / 2) ;
        for (int i=0; i< len; i+=2){
            if (myarray[i] != myarray[i+2]){
                int temp;
                temp = myarray[i];
                myarray[i] = myarray[i+2];
                myarray[i+2] = temp;     
                
                for(int j=0;j<str.length();j++){
                    cout<<myarray[j]<<"\t";
                }
                cout<<endl;

                if((myarray[i] == 0) && (myarray[i+2] == 1) && (myarray != mynewarr)){
                    counter++;
                    cout<<counter<<endl;

                    for (int k=0;k<len;k++){
                        myarray[k] =mynewarr[k];
                    }
                }
            }
        }
        for (int i=1; i< len; i+=2){
            if (myarray[i] != myarray[i+2]){
                int temp;
                temp = myarray[i];
                myarray[i] = myarray[i+2];
                myarray[i+2] = temp;     
                
                for(int j=0;j<str.length();j++){
                    cout<<myarray[j]<<"\t";
                }
                cout<<endl;

                if((myarray[i] == 0) && (myarray[i+2] == 1) && (myarray != mynewarr)){
                    counter++;
                    cout<<counter<<endl;
                }

                for (int k=0;k<len;k++){
                    myarray[k] =mynewarr[k];
                }
            }
        }
    }

    else if(len % 2 != 0){
        len = (len / 2) ;
        for (int i=0; i< len+1; i+=2){
            if (myarray[i] != myarray[i+2]){
                int temp;
                temp = myarray[i];
                myarray[i] = myarray[i+2];
                myarray[i+2] = temp;     
                
                for(int j=0;j<str.length();j++){
                    cout<<myarray[j]<<"\t";
                }
                cout<<endl;

                if((myarray[i] == 0) && (myarray[i+2] == 1) && (myarray != mynewarr)){
                    counter++;
                    cout<<counter<<endl;
                }

                for (int k=0;k<len;k++){
                    myarray[k] =mynewarr[k];
                }
            }
        }

        for (int i=1; i< str.length(); i+=2){
            if (myarray[i] != myarray[i+2]){
                int temp;
                temp = myarray[i];
                myarray[i] = myarray[i+2];
                myarray[i+2] = temp;     
                
                for(int j=0;j<str.length();j++){
                    cout<<myarray[j]<<"\t";
                }
                cout<<endl;

                if((myarray[i] == 0) && (myarray[i+2] == 1) && (myarray != mynewarr)){
                    counter++;
                    cout<<counter<<endl;

                    for (int k=0;k<len;k++){
                        myarray[k] =mynewarr[k];
                    }
                }
            }
        }
    }

    cout<<endl;
}
