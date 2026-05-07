//check if the number is prime or not
#include<iostream>  //for input and output
using namespace std;

int main() {
    int n=11;
    bool isPrime= true;

    for(int i=2;i<=n-1;i++){  
        if(n % i ==0){
            isPrime = false;
            break; //break is a keyword used to come out from loop
        }     

    }
        if(isPrime == true){

            cout<<"prime\n";//print if isPrime is true

        }else{
            cout<<"non prime\n";//print is isPrime is false

        }
        return 0;
}
//end of program

        
        