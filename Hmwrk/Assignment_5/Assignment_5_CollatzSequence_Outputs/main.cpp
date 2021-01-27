/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 26, 2021, 11:32 AM
 * Purpose: Collatz Sequence
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
int collatz(int);//3n+1 sequence
int num(int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int n;   //input
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<n<<", "<<num(n)<<endl;
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
int collatz(int n){
    int i = 1;
    while (n>1){
        if (n%2 == 0){ //If input is even
            n = (n/2);
        }else{         //If input is odd
            n=3*n+1;
        }
        i++;
    }
    return i;
}
int num(int n){
    int j = 1;
    while (n>2){
        if (n%2 == 0){ //If input is even
            n = (n/2);
            cout<<n<<", ";
        }else{         //If input is odd
            n=3*n+1;
            cout<<n<<", ";
        }
        j++;
    }
    return 1;
}
