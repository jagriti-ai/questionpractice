// program to find factorial of a number
#include<iostream>
using namespace std;

int main() {

    int n;
   long long factorial=1;
// input from user
   cout<<"enter n:";     
   cin>>n;

// calculate factorial using loop

   for(int i=1;i<=n; i++){   
factorial= factorial*i; // moving to next number in loop
    cout<<i<< "! =" << factorial<<endl;  // output
   }

   return 0;
}// end of program
