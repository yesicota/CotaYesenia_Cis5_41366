/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 12, 2021, 8:06 PM
 * Purpose:  Find Average Test Scores
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float testA, //Test scores
          testB,
          testC,
          testD,
          testE,
          avg;   //Average of Test Scores  
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>>testA>>testB>>testC>>testD>>testE;
    avg=(testA+testB+testC+testD+testE)/5;
    
    //Display the outputs
    cout<<"The average = "<<fixed<<setprecision(1)<<avg;
    //Exit stage right or left!
    return 0;
}