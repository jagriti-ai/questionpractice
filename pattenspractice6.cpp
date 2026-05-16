//program to print a triangular pattern              //1
#include<iostream>                                   //12
using namespace std;                                 //123
                                                     //1234
int main() {

int n=4; //input

for(int i=0; i<n; i++){ //outer loop

int num =1; //variable num as always the loop is starting with the digit 1
for( int j=1; j<=i+1; j++){ //inner loop
cout<<j; //output
}
cout<<endl; //end of line
}
return 0;

}//end of program