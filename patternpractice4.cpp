//program to print stars in a triangular pattern
#include<iostream>
using namespace std;

int main() {

int n=4; //input

//processing
for(int i=0; i<n; i++){ //outer loop

    for(int j=0; j<i+1; j++){ //inner loop

        cout<<"*"<<" "; //output

    }
    cout<<endl; //end of line after every iteration

}
return 0;
}// end of program