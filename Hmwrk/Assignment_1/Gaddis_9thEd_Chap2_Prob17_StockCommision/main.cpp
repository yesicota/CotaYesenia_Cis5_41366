/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 6, 2021, 8:04 PM
 * Purpose: Stock Commission
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
    short int shrs, //Shares of stock bought
              shrprc, //Price of stock per share
              stktlt, //Price for stock alone
              cmsn, //Price of commission
              tlt; //Total amount paid
            
    //Initialize Variables
    shrs=750;
    shrprc=35;
   
    //Map Inputs to Outputs -> Process
    stktlt=shrs*shrprc;
    cmsn=stktlt*0.02;
    tlt=cmsn+stktlt;
    
    //Display Inputs/Outputs
    cout<<"The amount paid for the stock alone = $"<<stktlt<<endl;
    cout<<"The amount of the commission = $"<<cmsn<<endl;
    cout<<"The total amount paid = $"<<tlt<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}


