/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 5, 2021, 11:23 PM
 * Purpose: Annual High Temperatures
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
    unsigned short NYC, //Average July High Temperature in New York City
                   Dnvr, //Average July High Temperature in Denver
                   Phnx, //Average July High Temperature in Phoenix
                   NYCN, //New Average July High Temperature in New York City
                   DnvrN, //New Average July High Temperature in Denver
                   PhnxN; //New Average July High Temperature in Phoenix
    
    //Initialize Variables
    NYC=85;
    Dnvr=88;
    Phnx=106;
    
    //Map Inputs to Outputs -> Process
    NYCN=NYC*0.02+NYC; //New Average July High Temperature if Raised by 2 percent
    DnvrN=Dnvr*0.02+Dnvr; 
    PhnxN=Phnx*0.02+Phnx;
    
    //Display Inputs/Outputs
    cout<<"New Average July High Temperature in New York City = "<<NYCN<<" degrees Fahrenheit if raised by 2 percent\n";
    cout<<"New Average July High Temperature in Denevr = "<<DnvrN<<" degrees Fahrenheit if raised by 2 percent\n";
    cout<<"New Average July High Temperature in Phoenix = "<<PhnxN<<" degrees Fahrenheit if raised by 2 percent"<<endl;
    //Exit the Program - Cleanup
    return 0;
}


