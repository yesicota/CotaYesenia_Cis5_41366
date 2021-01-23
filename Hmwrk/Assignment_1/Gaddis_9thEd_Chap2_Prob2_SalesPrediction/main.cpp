/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 6, 2021, 7:49 PM
 * Purpose: Sales Prediction
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
    long long int Sls, //Total Company sales this year
                  SlsGnr; //East coast sales division sales
    
    //Initialize Variables
    Sls=8600000;
            
    //Map Inputs to Outputs -> Process
    SlsGnr=Sls*0.58; //East coast sales division generate 58 percent of total sales
            
    //Display Inputs/Outputs
    cout<<"It is predicted that the East Coast division will generate $";
    cout<<SlsGnr<<" in sales this year if they generate 58 percent of";
    cout<<" the company's total sales, which is $"<<Sls<<"."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}


