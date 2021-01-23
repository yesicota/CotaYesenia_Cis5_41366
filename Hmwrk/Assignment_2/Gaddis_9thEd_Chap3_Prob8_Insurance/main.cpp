/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 12, 2021, 8:20PM
 * Purpose:  Calculate total calories consumed
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float rplCost, //Replacement cost of a building
          insPer;  //Minimum amount of insurance, at least 80% of rplCost
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n";
    cin>>rplCost;
    insPer=rplCost*0.8;
    
    //Display the outputs
    cout<<"You need $"<<insPer<<" of insurance.";
    //Exit stage right or left!
    return 0;
}