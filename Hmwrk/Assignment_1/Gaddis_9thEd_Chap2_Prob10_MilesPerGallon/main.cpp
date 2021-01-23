/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 4, 2021, 5:33 PM
 * Purpose: CPP Template
 *          To be copied for each Assignment Problem
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
    unsigned short GlnsGas, //Gallons of Gas Used by Car
                   MlsDrv, //Miles Driven
                   MPG; //Miles Per Gallon
    
    //Initialize Variables
    GlnsGas=15;
    MlsDrv=375;
            
    //Map Inputs to Outputs -> Process
    MPG=MlsDrv/GlnsGas;
    
    //Display Inputs/Outputs
    cout<<"Number of Miles per Gallon = "<<MPG<<" to drive ";
    cout<<MlsDrv<<" miles while holding "<<GlnsGas<<" gallons in a car"<<endl;
    //Exit the Program - Cleanup
    return 0;
}


