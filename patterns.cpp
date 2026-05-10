#include<iostream>
using namespace std;

int main() {
// input 
    int n;
    cout<<"enter n:";
    cin>>n;
//processing
for(int i=1; i<=n; i++){ //outer loop
      
    for(int j=1; j<=n; j++){ //inner loop
 //output
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0; // end of program
}