//program to print triangle pattern
#include<iostream>
using namespace std;

int main(){

int n=4;  //input

//processing
for(int i=0; i<n; i++){ //outer looop

    for(int j=0; j<i+1; j++){ //inner loop
        cout<<i+1<<" "; 
    //output
    }
    cout<<endl;
}
return 0;
}// end of program