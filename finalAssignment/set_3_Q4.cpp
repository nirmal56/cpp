/*
Q4: In this question, you are given a binary string of length T. Now you need to create two
permutations of this string: S1 and S2 such that the ‘longest common subsequence’ between the two
newly created strings is smallest.
Ex: Given string: 101, you can find S1: 110 and S2: 011, The longest common subsequence between
S1 and S2 is 11 and the length is 2. There cannot be any two permutations of the given string where
the LCS is less than 2
Ex: Given 0111, then S1 should be: 1101, and S2: 0111, the smallest LCS will be 2 char long.
*/
#include <string.h>
#include <iostream>
using namespace std;
int j = 0, r = 0;
int listOfRotation[] = {};
string myarray[] = {};

bool chkforswap(char str[], int beg, int curr){
    for (int i = beg; i < curr; i++)
        if (str[i] == str[curr])
            return 0;
    return 1;
}

void smallestValue(int myarray[], int N){
    int min = myarray[0];
    for (int i = 1; i < N; i++)    {
        if (myarray[i] < min)
            min = myarray[i];
    }
    cout << "The smallest LCS is: " << min <<endl;
}

void rotatingString(char str[], int ind, int len){
    if (ind >= len){
        myarray[j] = str;
        j++;
        return;
    }
    for (int i = ind; i < len; i++){
        bool check = chkforswap(str, ind, i);
        if (check){
            swap(str[ind], str[i]);
            rotatingString(str, ind + 1, len);
            swap(str[ind], str[i]);
        }
    }
}

int LCS(string X, string Y, int m, int n){

    int LCSuff[m + 1][n + 1];
    int result = 0; 

    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i - 1] == Y[j - 1]){
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    listOfRotation[r] = result;
    r++;
    return result;
}

int main(){
    char string[20];
    int len;
    cout << "Enter string : ";
    cin >> string;

    len = strlen(string);
    rotatingString(string, 0, len);
    if (j == 2)
        cout << "The smallest LCS is: 0" <<endl;
    else{
        for (int i = 0; i < j; i++){
            for (int k = i + 1; k < j; k++){
                LCS(myarray[i], myarray[k], len, len);
            }
        }
    }
    smallestValue(listOfRotation, r);
    return 0;
}
