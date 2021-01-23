/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 12, 2021, 2:47 PM
 * Purpose: +- Sums and Averages
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int number, //10 Numbers to Input into the program
        totSum, //tot represents total
        negSum, //neg represents the negative
        posSum; //pos represent the positive
    
    //Initialize Variables
    totSum=negSum=posSum=0;
    
    //Map Inputs to Outputs -> Process
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
   
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    //Final Calculation
    totSum=posSum+negSum;
    
    //Display Inputs/Outputs
    cout<<"Negative sum = "<<setw(3)<<negSum<<endl;
    cout<<"Positive sum = "<<setw(3)<<posSum<<endl;
    cout<<"Total sum    = "<<setw(3)<<totSum;
    
    //Exit the Program - Cleanup
    return 0;
}


