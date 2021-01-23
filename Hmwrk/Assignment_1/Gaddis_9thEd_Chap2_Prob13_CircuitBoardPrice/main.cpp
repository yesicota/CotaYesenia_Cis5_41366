/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 6, 2021, 8:22 PM
 * Purpose: Circuit Board Price
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
    float crtcst, //Cost of a circuit board
              crtprc; //Selling price of circuit board
            
    //Initialize Variables
    crtcst=14.95;
   
    //Map Inputs to Outputs -> Process
    crtprc=crtcst*0.35 + crtcst;
    
    //Display Inputs/Outputs
    cout<<"The selling price of a circuit board that costs $"<<crtcst<<
            " with a 35 percent profit is $"<<crtprc<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}


