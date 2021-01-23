/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 6, 2021, 7:10 PM
 * Purpose: Sum of Two Numbers
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short int A,
                       B,
                       total; //Sum of two variables
    //Initialize Variables
    A=50;
    B=100;
    
    //Map Inputs to Outputs -> Process
    total=A+B;
    
    //Display Inputs/Outputs
    cout<<"The sum of integers "<<A<<" and "<<B<<" is ";
    cout<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}


