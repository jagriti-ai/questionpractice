//program to print characters in floyd's triangle
#include <iostream>
using namespace std;


int main() {
    int n=4; //input
    char ch='A'; //variable

    for(int i=0; i<n; i++){ //ouoter loop for printing rows

        for(int j=0; j<i+1; j++){ //inner loop for printing characters inside rows
 
            cout<<ch<<" "; //print character
            ch++; //upgrade variable
        } 
        cout<<endl; //next line
    }
    
    return 0;
}//end of program