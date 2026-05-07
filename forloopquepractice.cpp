#include<iostream> //for input and output
using namespace std;

int main() {
    int n=5;   // sum upto 5
    int sum=0;  //variable sum is equal to zero at initial

    for (int i=1;i<=n;i++){
        sum+=i;
        if(i==3){
            break; //keywords
        }

    }
    cout << sum << endl; //print when the loop is over

    return 0; //end of program
}
