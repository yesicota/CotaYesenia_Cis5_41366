/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 4, 2021, 5:33 PM
 * Purpose: Calculate the military budget as a percentage of the federal budget
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
    float milBdgt, //Military Budget
          fedBdgt, //Federal Budget
          mlPrcnt; //Military Budget as Percentage of Federal Budget
    
    //Initialize Variables
    milBdgt=7.0e11f; //Military Budget = 700 Billion
    fedBdgt=4.1e12f; //Federal Budget = 4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=(milBdgt/fedBdgt)*100;
    
    //Display Inputs/Outputs
    cout<<"The military budget is "<<mlPrcnt<<"% of the Federal Budget.\n";
    //Exit the Program - Cleanup
    return 0;
}


