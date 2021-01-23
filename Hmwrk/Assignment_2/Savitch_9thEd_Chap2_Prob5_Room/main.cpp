/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 15, 2021, 5:53 PM
 * Purpose: Determine whether a room is in violation of fire law regulations
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
    int maxCap, //Maximum room capacity
        peop,   //Number of people in room 
        adPep,  //Additional people past capacity
        mPep;   //People that can be allowed in without violation
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Input the maximum room capacity and the number of people\n";
    cin>>maxCap>>peop;
    if(peop>maxCap){
        adPep=peop-maxCap;
        cout<<"Meeting cannot be held.\n";
        cout<<"Reduce number of people by "<<adPep<<" to avoid fire violation.";
    }
    else {
        mPep=maxCap-peop;
        cout<<"Meeting can be held.\n";
        cout<<"Increase number of people by "<<mPep<<" will be allowed without violation.";
    }
    //Exit the Program - Cleanup
    return 0;
}


