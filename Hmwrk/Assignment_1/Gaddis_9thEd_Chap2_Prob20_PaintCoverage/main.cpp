/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 5, 2021, 10:02 PM
 * Purpose: Painters Problem
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
    unsigned short height, //Height of Fence in Feet
                   length, //Length of Fence in Feet
                   pntCov, //Paint Coverage / can in Ft^2
                   srfArea, //Surface Area to Paint in Ft^2
                   numGlns; //Number of Gallons of Paint
            
    //Initialize Variables
    height=6;
    length=100;
    pntCov=340;
    
    //Map Inputs to Outputs -> Process
    srfArea=2*2*height*length;//Paint twice front and back of the Fence
    numGlns=srfArea/pntCov;
            
    //Display Inputs/Outputs
    cout<<"Number of Gallons required = "<<numGlns<<" to paint a ";
    cout<<height<<" x "<<length<<" ft^2 fence front and back twice"<<endl;
    //Exit the Program - Cleanup
    return 0;
}


