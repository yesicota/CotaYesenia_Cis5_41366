/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 12:27 AM
 * Purpose: Use loops to find sum of integers
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
    int inpInt,   //Inputted Integer
        sumInt=0; //Sum of all integers from 1 to inpInt
    
    //Display Inputs
    cin>>inpInt;
    
    //Map Inputs->Outputs
    for (int count = 0; count <= inpInt; count++)
    {
        sumInt += count;
    }
    //Display Outputs
    cout<<"Sum = "<<sumInt;

    //Exit the Program - Cleanup
    return 0;
}


