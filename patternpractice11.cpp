#include <iostream>            //ABCD
using namespace std;           // ABC
                               //  AB
int main(){                    //   A
//input
    int n=4; 
    char ch='A';
//outer loop 

    for(int i=0; i<n; i++){

//ist inner loop to print spaces

        for(int j=0; j<i; j++){
             cout<<" ";
             //2nd inner loop to print characters
        }
            for( int j=0; j<n-i; j++){
                cout<<char('A'+j); //adding j because it changes column wise to print different characters 

               
            }

            
                cout<<endl; //end of line
    }     
    return 0;
}//end of program