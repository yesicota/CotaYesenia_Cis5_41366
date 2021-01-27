/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 26, 2021, 7:58 PM
 * Purpose: Calculate present value
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float prVl(float, float, float, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int    yrs;
    float  fv,
           intr,
           pv;
    
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>fv;
    cout<<"Input the Number of Years"<<endl;
    cin>>yrs;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intr;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The Present Value = $";
    cout<<prVl(pv, fv, intr, yrs);
    
    //Exit the Program - Cleanup
    return 0;
}
float prVl(float pv, float fv, float intr, int yrs){
    pv=fv/pow(1+(intr/100.0f),yrs);
    return pv;
}

