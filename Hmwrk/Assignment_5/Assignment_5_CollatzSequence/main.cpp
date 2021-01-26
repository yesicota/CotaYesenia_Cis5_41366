/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 25, 2021, 7:05 AM
 * Purpose: Collatz Sequence
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
int collatz(int);//3n+1 sequence


//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
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
        }else{          //If input is odd
            n=3*n+1;
        }
        i++;
    }
    return i;
}
