/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 25, 2021, 6:01 AM
 * Purpose: Create integer function that outputs factorial
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int input;
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function "<<
          "prototype found in the template for this problem.\n";
    cout<<"Input the number for the function.\n";
    cin>>input;
    
    //Display Inputs/Outputs
    cout<<input<<"! = "<<fctrl(input);
    
    //Exit the Program - Cleanup
    return 0;
}

int fctrl(int input){
    if(input >= 2)
        return input* fctrl(input - 1);
    else
        return input;
}
