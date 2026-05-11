// program for sqaure pattern questions
#include <iostream>
using namespace std;

int main() {

    int n=3;  //input
    int num=1;
    // processing
    for(int i=0; i<n; i++){ //outer loop

        for(int j=0; j<n; j++ ){ //inner loop
          cout<<num<<" ";
          num++;
        }
        cout<<endl; //output
    }
    return 0;

}// end of program