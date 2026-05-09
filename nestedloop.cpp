#include<iostream>  // fpr inpur and output
using namespace std;

int main() {
// to print a pattern with 5 lines each containing eight stars
    int n=5;  //no of lines
    for(int i=1;i<=n;i++){

    
    int m=8;
    for(int j=1;j<=m;j++){  // no of stars in one line
        cout<<"*";
    }
    cout<<endl;
}
return 0;
} // end of program