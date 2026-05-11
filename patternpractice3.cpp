//program to pattern characters without repetition
#include<iostream>
using namespace std;

int main() {

    int n=3; //input
    char alpha='A';

    //processing
    for(int i=0; i<n; i++){ //outer loop
        
        for(int j=0; j<n; j++){ //inner loop

            cout<<alpha<<" "; 
            alpha++;
        } //output
        cout<<endl; 
    }
    cout<<"after pattern: "<<alpha<<endl; // after pattern value of character

    return 0;
}// end of program