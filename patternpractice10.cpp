#include <iostream>            //AAAA
using namespace std;           // BBB
                               //  CC
int main(){                    //   D
//input
    int n=4; 
    char ch='A';
//outer loop 

    for(int i=0; i<n; i++){

//ist inner loop to print spaces

        for(int j=0; j<i; j++){
             cout<<" ";
        }
//2nd inner loop to print characters

            for( int j=0; j<n-i; j++){
                cout<<char('A'+i); // adding because it changes row wise to print same charachter in each row

               
            }

            
                cout<<endl; //end of line
    }     
    return 0;
}//end of program