#include <iostream>            //1111
using namespace std;           // 222
                               //  33
int main(){                    //   4
//input
    int n=4; 
//outer loop 

    for(int i=0; i<n; i++){

//ist inner loop to print spaces

        for(int j=0; j<i; j++){
            cout<<" ";
        }
//2nd inner loop to print numbers
            for( int j=0; j<n-i; j++){
                cout<<i+1;

            }
            
                cout<<endl; //end of line
    }
    return 0;
}//end of program