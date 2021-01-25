/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 25, 2021, 6:48 AM
 * Purpose: Determine if the input integer is prime or not
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int inp;
    
    //Initialize Variables
    cout<<"Input a number to test if Prime.\n";
    cin>>inp;
    
    //Map Inputs to Outputs -> Process
    if (isPrime(inp))
        cout<<inp<<" is prime.";
    else
        cout<<inp<<" is not prime.";
    
    //Exit the Program - Cleanup
    return 0;
}

bool isPrime(int inp){
    bool status;
    
    for(int j = 2; j <= inp/2; j++){
        if (inp % j == 0){
            status = false;
        }else
            status = true;
        return status;
        }
}
