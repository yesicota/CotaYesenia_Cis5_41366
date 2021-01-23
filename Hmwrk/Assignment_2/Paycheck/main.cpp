/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 15, 2021, 5:00 PM
 * Purpose: Calculate paycheck
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float pyRt, //Pay Rate
          hrs,  //Hours worked 
          pyChk; //Paycheck
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"This program calculates the gross paycheck.\n";
    cout<<"Input the pay rate in $'s/hr and the number of hours.\n";
    cin>>pyRt>>hrs;
    if (hrs>40)
        pyChk=pyRt*40 + 2*pyRt*(hrs-40);
    else
        pyChk=pyRt*hrs;
    cout<<"Paycheck = $"<<fixed<<setprecision(2)<<setw(7)<<pyChk;
    
    //Exit the Program - Cleanup
    return 0;
}


