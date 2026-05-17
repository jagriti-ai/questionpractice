//Program to print floyd's triangle
#include <iostream> //1
using namespace std;//23
                    //456
 int main() {       //78910

//input
int n=4;
int num=1;

//processing
for(int i=0; i<n; i++){ //outer loop

    for(int j=0; j<i+1; j++){ //inner loop
        cout<<num<<" "; //output
        num++; //upgrade variable
    }
    cout<<endl;
}
return 0;
 }   //end of program   